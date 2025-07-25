using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using DG.Tweening;
using TMPro;

namespace Hitcode_RoomEscape
{
    public class PanelMain : MonoBehaviour
    {
        // 主要 UI 文本组件
        public TextMeshProUGUI btnStart, btnLoad, btnYes, btnNo, txtWarn, tipbg;

        // 音乐与音效切换按钮
        public Toggle toggleMusic, toggleSFX;

        // 遮罩图像用于场景切换时的淡入淡出
        public Image mask;

        // 多语言图标资源
        public Sprite[] localIcon;

        // 面板对象
        public GameObject panelSaveLoad;
        public GameObject panelSetting;         // 设置面板
        public GameObject panelClearSaveData;   // 清除存档确认面板

        // 各类按钮引用
        public Button btnSeting;
        public Button btnCloseSetting;
        public Button btnClearSaveData;  // 打开清除确认面板
        public Button btnClearYes;       // 确认清除
        public Button btnClearNo;        // 取消清除

        // 其他可选面板引用
        [HideInInspector] public GameObject title;
        [HideInInspector] public GameObject panelShop, panelFade;

        Scene levelC; // 场景引用（未使用）

        void Start()
        {
            // 初始化游戏数据
            GameManager.getInstance().init();

            // 如果第一次运行，默认开启音乐
            if (!PlayerPrefs.HasKey("sound"))
            {
                PlayerPrefs.SetInt("sound", 1);
                PlayerPrefs.Save();
            }

            // 读取保存的音效设置
            GameData.getInstance().isSoundOn = PlayerPrefs.GetInt("sound");
            GameData.getInstance().isSfxOn = PlayerPrefs.GetInt("sfx", 1);

            // 设置 Toggle 状态
            toggleMusic.isOn = GameData.getInstance().isSoundOn == 1;
            toggleSFX.isOn = GameData.getInstance().isSfxOn == 1;

            // 若开启音乐则播放
            if (GameData.getInstance().isSoundOn == 0)
            {
                GameManager.getInstance().playMusic("bgmusic", true);
            }

            // UI 状态初始化
            fadeOut();
            txtWarn.transform.parent.gameObject.SetActive(false);
            btnYes.transform.parent.gameObject.SetActive(false);
            btnNo.transform.parent.gameObject.SetActive(false);
            panelSetting.SetActive(false);
            panelClearSaveData.SetActive(false); // 默认隐藏清除面板

            localizeView(); // 多语言文本初始化

            // 按钮事件绑定
            btnSeting.onClick.AddListener(() => OnClick(btnSeting.gameObject));
            btnCloseSetting.onClick.AddListener(() => OnClick(btnCloseSetting.gameObject));
            btnClearSaveData.onClick.AddListener(() => OnClick(btnClearSaveData.gameObject));
            btnClearYes.onClick.AddListener(() => OnClick(btnClearYes.gameObject));
            btnClearNo.onClick.AddListener(() => OnClick(btnClearNo.gameObject));
        }

        // 多语言文本设置
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

        // 按钮点击事件集中处理
        public void OnClick(GameObject g)
        {
            if (GameData.getInstance().locked) return;

            //Debug.Log("点击按钮：" + g.name);

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
                    panelClearSaveData.SetActive(true); // 打开确认面板
                    break;

                case "btnClearYes":
                    GameManager.getInstance().playSfx("click");
                    GameData.Instance.clearSlot();
                    PlayerPrefs.SetInt("sound", GameData.Instance.isSoundOn);
                    PlayerPrefs.SetInt("sfx", GameData.Instance.isSfxOn);
                    PlayerPrefs.SetInt("clanguage", GameData.Instance.cLanguage);
                    fadeIn("startCutScene"); // 清除并跳转
                    break;

                case "btnClearNo":
                    //Debug.Log("关闭清除存档面板");
                    GameManager.getInstance().playSfx("click");
                    panelClearSaveData.SetActive(false); // 取消关闭面板
                    break;
            }
        }

        // 音乐与音效开关控制
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

        // 黑幕淡出（进入游戏时）
        void fadeOut()
        {
            mask.gameObject.SetActive(true);
            mask.color = Color.black;
            mask.DOFade(0, 1).OnComplete(fadeOutOver);
        }

        // 黑幕淡入（准备加载场景）
        void fadeIn(string sceneName)
        {
            if (mask.IsActive()) return;
            mask.gameObject.SetActive(true);
            mask.color = new Color(0, 0, 0, 0);
            mask.DOFade(1, 1).OnComplete(() => fadeInOver(sceneName));
        }

        // 淡入完成后加载场景
        void fadeInOver(string sceneName)
        {
            SceneManager.LoadScene(sceneName);
            PlayerPrefs.SetInt("firstplay", 0);
        }

        // 淡出完成，关闭黑幕
        void fadeOutOver()
        {
            mask.gameObject.SetActive(false);
        }

        // 用于 WebGL 的异步场景加载
        string startCutScene;
        IEnumerator waitaframe()
        {
            yield return new WaitForEndOfFrame();
            fadeIn(startCutScene);
        }
    }
}
