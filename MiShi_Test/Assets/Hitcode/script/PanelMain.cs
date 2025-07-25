using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using DG.Tweening;
using TMPro;
using System.Collections.Generic;

namespace Hitcode_RoomEscape
{
    public class PanelMain : MonoBehaviour
    {
        // UI 文本组件
        public TextMeshProUGUI btnStart, btnLoad, btnYes, btnNo, txtWarn, tipbg;

        // 音乐与音效切换按钮
        public Toggle toggleMusic, toggleSFX;

        // 音量滑杆
        public Slider sliderMusicVolume;
        public Slider sliderSfxVolume;

        // 遮罩图像用于场景切换时的淡入淡出
        public Image mask;

        // 多语言图标资源
        public Sprite[] localIcon;

        // 面板对象
        public GameObject panelSaveLoad;
        public GameObject panelSetting;
        public GameObject panelClearSaveData;

        // 各类按钮引用
        public Button btnSeting;
        public Button btnCloseSetting;
        public Button btnClearSaveData;
        public Button btnClearYes;
        public Button btnClearNo;

        [HideInInspector] public GameObject title;
        [HideInInspector] public GameObject panelShop, panelFade;

        // 每个场景对应的音乐名称（空字符串表示不播放音乐）
        Dictionary<string, string> sceneMusicMap = new Dictionary<string, string>()
        {
            { "startCutScene", "" },
            { "Level01", "" }
        };

        Scene levelC;
        string startCutScene;

        void Start()
        {
            GameManager.getInstance().init();

            sliderMusicVolume.onValueChanged.AddListener(OnMusicVolumeChanged);
            sliderSfxVolume.onValueChanged.AddListener(OnSfxVolumeChanged);

            if (!PlayerPrefs.HasKey("sound")) PlayerPrefs.SetInt("sound", 1);
            if (!PlayerPrefs.HasKey("sfx")) PlayerPrefs.SetInt("sfx", 1);
            if (!PlayerPrefs.HasKey("musicVolume")) PlayerPrefs.SetFloat("musicVolume", 1f);
            if (!PlayerPrefs.HasKey("sfxVolume")) PlayerPrefs.SetFloat("sfxVolume", 1f);
            PlayerPrefs.Save();

            GameData.getInstance().isSoundOn = PlayerPrefs.GetInt("sound");
            GameData.getInstance().isSfxOn = PlayerPrefs.GetInt("sfx");

            toggleMusic.isOn = GameData.getInstance().isSoundOn == 1;
            toggleSFX.isOn = GameData.getInstance().isSfxOn == 1;

            // 初始化音量滑杆
            float musicVolume = PlayerPrefs.GetFloat("musicVolume", 1f);
            float sfxVolume = PlayerPrefs.GetFloat("sfxVolume", 1f);
            sliderMusicVolume.value = musicVolume;
            sliderSfxVolume.value = sfxVolume;
            GameManager.getInstance().setMusicVolume(musicVolume);
            GameManager.getInstance().setSfxVolume(sfxVolume);

            if (GameData.getInstance().isSoundOn == 0)
                GameManager.getInstance().playMusic("bgmusic", true);

            fadeOut();
            txtWarn.transform.parent.gameObject.SetActive(false);
            btnYes.transform.parent.gameObject.SetActive(false);
            btnNo.transform.parent.gameObject.SetActive(false);
            panelSetting.SetActive(false);
            panelClearSaveData.SetActive(false);

            localizeView();

            btnSeting.onClick.AddListener(() => OnClick(btnSeting.gameObject));
            btnCloseSetting.onClick.AddListener(() => OnClick(btnCloseSetting.gameObject));
            btnClearSaveData.onClick.AddListener(() => OnClick(btnClearSaveData.gameObject));
            btnClearYes.onClick.AddListener(() => OnClick(btnClearYes.gameObject));
            btnClearNo.onClick.AddListener(() => OnClick(btnClearNo.gameObject));
        }

        void localizeView()
        {
            GameData.Instance.cLanguage = PlayerPrefs.GetInt("clanguage");
            GameData.Instance.setLanguage();

            btnStart.text = Localization.Instance.GetString("btnStart");
#if UNITY_WEBGL
            btnLoad.text = Localization.Instance.GetString("btnContinue");
#else
            btnLoad.text = Localization.Instance.GetString("btnLoad");
#endif
            btnYes.text = Localization.Instance.GetString("btnYes");
            btnNo.text = Localization.Instance.GetString("btnNo");
            tipbg.text = Localization.Instance.GetString("newGameTip");

            if (PlayerPrefs.GetInt("firstplay", 0) == 0)
            {
                btnLoad.transform.parent.GetComponent<Button>().interactable = false;
                btnLoad.color = new Color(1, 1, 1, 0.3f);
            }
        }

        public void OnClick(GameObject g)
        {
            if (GameData.getInstance().locked) return;

            switch (g.name)
            {
                case "btnStart":
                    GameManager.getInstance().playSfx("click");
                    txtWarn.transform.parent.gameObject.SetActive(true);
                    btnYes.transform.parent.gameObject.SetActive(true);
                    btnNo.transform.parent.gameObject.SetActive(true);
                    btnStart.transform.parent.gameObject.SetActive(false);
                    btnLoad.transform.parent.gameObject.SetActive(false);
                    break;

                case "btnLoad":
#if UNITY_WEBGL
                    GameManager.getInstance().playSfx("click");
                    startCutScene = PlayerPrefs.GetString("quitSceneName0", "startCutScene");
                    StartCoroutine(waitaframe());
#else
                    panelSaveLoad.GetComponent<PanelSaveLoad>().init(1);
#endif
                    break;

                case "btnContinue":
                    GameManager.getInstance().playSfx("click");
                    startCutScene = PlayerPrefs.GetString("quitSceneName0", "startCutScene");
                    StartCoroutine(waitaframe());
                    break;

                case "btnYes":
                    GameManager.getInstance().playSfx("click");
                    GameData.Instance.clearSlot();
                    PlayerPrefs.SetInt("sound", GameData.Instance.isSoundOn);
                    PlayerPrefs.SetInt("sfx", GameData.Instance.isSfxOn);
                    PlayerPrefs.SetInt("clanguage", GameData.Instance.cLanguage);
                    fadeIn("startCutScene");
                    break;

                case "btnNo":
                    GameManager.getInstance().playSfx("click");
                    txtWarn.transform.parent.gameObject.SetActive(false);
                    btnYes.transform.parent.gameObject.SetActive(false);
                    btnNo.transform.parent.gameObject.SetActive(false);
                    btnStart.transform.parent.gameObject.SetActive(true);
                    btnLoad.transform.parent.gameObject.SetActive(true);
                    break;

                case "btnSeting":
                    GameManager.getInstance().playSfx("click");
                    panelSetting.SetActive(true);
                    break;

                case "btnCloseSetting":
                    GameManager.getInstance().playSfx("click");
                    panelSetting.SetActive(false);
                    break;

                case "btnClearSaveData":
                    GameManager.getInstance().playSfx("click");
                    panelClearSaveData.SetActive(true);
                    break;

                case "btnClearYes":
                    GameManager.getInstance().playSfx("click");
                    GameData.Instance.clearSlot();
                    PlayerPrefs.SetInt("sound", GameData.Instance.isSoundOn);
                    PlayerPrefs.SetInt("sfx", GameData.Instance.isSfxOn);
                    PlayerPrefs.SetInt("clanguage", GameData.Instance.cLanguage);
                    fadeIn("startCutScene");
                    break;

                case "btnClearNo":
                    GameManager.getInstance().playSfx("click");
                    panelClearSaveData.SetActive(false);
                    break;
            }
        }

        bool musicInited = false;
        bool toggleSfxInited = false;

        public void OnToggle(Toggle toggle)
        {
            switch (toggle.gameObject.name)
            {
                case "ToggleMusic":
                    if (!musicInited) { musicInited = true; }
                    else GameManager.getInstance().playSfx("click");

                    GameData.getInstance().isSoundOn = toggle.isOn ? 1 : 0;
                    if (toggle.isOn)
                        GameManager.getInstance().stopBGMusic();
                    else
                        GameManager.getInstance().playMusic("bgmusic", true);

                    PlayerPrefs.SetInt("sound", GameData.getInstance().isSoundOn);
                    break;

                case "ToggleSfx":
                    GameData.getInstance().isSfxOn = toggle.isOn ? 1 : 0;
                    if (!toggleSfxInited) toggleSfxInited = true;
                    else GameManager.getInstance().playSfx("click");

                    PlayerPrefs.SetInt("sfx", GameData.getInstance().isSfxOn);
                    break;
            }
        }

        // 音量滑杆响应函数
                public void OnMusicVolumeChanged(float value)
                {
                    GameManager.getInstance().setMusicVolume(value);
                    PlayerPrefs.SetFloat("musicVolume", value);
                    PlayerPrefs.Save();
                }

                public void OnSfxVolumeChanged(float value)
                {
                    GameManager.getInstance().setSfxVolume(value);
                    PlayerPrefs.SetFloat("sfxVolume", value);
                    PlayerPrefs.Save();
                }


        void fadeOut()
        {
            mask.gameObject.SetActive(true);
            mask.color = Color.black;
            mask.DOFade(0, 1).OnComplete(fadeOutOver);
        }

        void fadeIn(string sceneName)
        {
            if (mask.IsActive()) return;
            mask.gameObject.SetActive(true);
            mask.color = new Color(0, 0, 0, 0);
            mask.DOFade(1, 1).OnComplete(() => fadeInOver(sceneName));
        }

        void fadeInOver(string sceneName)
        {
            PlayerPrefs.SetInt("firstplay", 0);

            if (sceneMusicMap.ContainsKey(sceneName))
            {
                string musicName = sceneMusicMap[sceneName];
                if (!string.IsNullOrEmpty(musicName) && GameData.getInstance().isSoundOn == 0)
                {
                    GameManager.getInstance().playMusic(musicName, true);
                }
                else
                {
                    GameManager.getInstance().stopBGMusic();
                }
            }

            SceneManager.LoadScene(sceneName);
        }

        void fadeOutOver()
        {
            mask.gameObject.SetActive(false);
        }

        IEnumerator waitaframe()
        {
            yield return new WaitForEndOfFrame();
            fadeIn(startCutScene);
        }
    }
}
