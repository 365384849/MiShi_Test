using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.Collections.Generic;
using DG.Tweening;
using TMPro; // TextMeshPro 的命名空间

namespace Hitcode_RoomEscape
{
    public class PanelMain : MonoBehaviour
    {
        // UI 文本组件（使用 TextMeshProUGUI）
        public TextMeshProUGUI btnStart, btnLoad, btnYes, btnNo, txtWarn, tipbg;

        // 音乐与音效开关 Toggle
        public Toggle toggleMusic, toggleSFX;

        // UI 遮罩图，用于淡入淡出
        public Image mask;

        // 多语言图标数组
        public Sprite[] localIcon;

        // 存档加载面板
        public GameObject panelSaveLoad;

        // 设置面板及其控制按钮
        public GameObject panelSetting;
        public Button btnSeting;
        public Button btnCloseSetting;

        // 其他 UI 或面板引用（可选）
        [HideInInspector] public GameObject title;
        [HideInInspector] public GameObject panelShop, panelFade;

        Scene levelC; // 场景引用（暂未使用）

        void Start()
        {
            // 初始化游戏逻辑
            GameManager.getInstance().init();

            // ✅ 默认背景音乐开启：如没有保存，则设置为开启
            if (!PlayerPrefs.HasKey("sound"))
            {
                PlayerPrefs.SetInt("sound", 1); // 默认开启背景音乐
                PlayerPrefs.Save();
            }

            // 从本地保存中读取音乐与音效设置
            GameData.getInstance().isSoundOn = PlayerPrefs.GetInt("sound");
            GameData.getInstance().isSfxOn = PlayerPrefs.GetInt("sfx", 1); // 默认为开启

            // 初始化音乐和音效 Toggle 状态
            toggleMusic.isOn = GameData.getInstance().isSoundOn == 1;
            toggleSFX.isOn = GameData.getInstance().isSfxOn == 1;

            // 如果音乐未关闭，则播放背景音乐
            if (GameData.getInstance().isSoundOn == 0)
            {
                GameManager.getInstance().playMusic("bgmusic", true);
            }

            // UI 状态初始化
            fadeOut(); // 淡出黑幕
            txtWarn.transform.parent.gameObject.SetActive(false);
            btnYes.transform.parent.gameObject.SetActive(false);
            btnNo.transform.parent.gameObject.SetActive(false);
            panelSetting.SetActive(false); // 默认关闭设置面板

            localizeView(); // 设置语言与文本

            // 设置按钮绑定点击事件（可选）
            btnSeting.onClick.AddListener(() => OnClick(btnSeting.gameObject));
            btnCloseSetting.onClick.AddListener(() => OnClick(btnCloseSetting.gameObject));
        }

        // 设置界面多语言本地化内容
        void localizeView()
        {
            GameData.Instance.cLanguage = PlayerPrefs.GetInt("clanguage");
  //          transform.Find("btnLocal").GetComponent<Image>().sprite = localIcon[GameData.Instance.cLanguage];
            GameData.Instance.setLanguage();

            // 替换按钮文本
            btnStart.text = Localization.Instance.GetString("btnStart");
#if UNITY_WEBGL
            btnLoad.text = Localization.Instance.GetString("btnContinue");
#else
            btnLoad.text = Localization.Instance.GetString("btnLoad");
#endif
            btnYes.text = Localization.Instance.GetString("btnYes");
            btnNo.text = Localization.Instance.GetString("btnNo");
            tipbg.text = Localization.Instance.GetString("newGameTip");

            // 若为第一次游戏，禁用“加载”按钮
            if (PlayerPrefs.GetInt("firstplay", 0) == 0)
            {
                btnLoad.transform.parent.GetComponent<Button>().interactable = false;
                btnLoad.color = new Color(1, 1, 1, 0.3f);
            }

#if UNITY_WEBGL
            transform.Find("btnLocal").gameObject.SetActive(false);
#endif
        }

        // 获取主菜单容器（用于未来逻辑扩展）
        GameObject all_mainMenu;
        void OnEnable()
        {
            all_mainMenu = GameObject.Find("all_mainMenu");
        }

        void Update()
        {
#if UNITY_IOS
            // GameManager.getInstance().hideBanner(true);
#endif
        }

        // 所有按钮点击事件处理统一入口
        public void OnClick(GameObject g)
        {
            if (GameData.getInstance().locked) return;

            Debug.Log("点击按钮：" + g.name); // 调试用日志

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
                    startroom = PlayerPrefs.GetString("quitSceneName0", "startroom");
                    StartCoroutine(waitaframe());
#else
                    panelSaveLoad.GetComponent<PanelSaveLoad>().init(1);
#endif
                    break;

                case "btnContinue":
                    GameManager.getInstance().playSfx("click");
                    startroom = PlayerPrefs.GetString("quitSceneName0", "startroom");
                    StartCoroutine(waitaframe());
                    break;

                case "btnYes":
                    GameManager.getInstance().playSfx("click");
                    GameData.Instance.clearSlot();
                    PlayerPrefs.SetInt("sound", GameData.Instance.isSoundOn);
                    PlayerPrefs.SetInt("sfx", GameData.Instance.isSfxOn);
                    PlayerPrefs.SetInt("clanguage", GameData.Instance.cLanguage);
                    fadeIn("startroom");
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
                    panelSetting.SetActive(true); // 显示设置面板
                    break;

                case "btnCloseSetting":
                    GameManager.getInstance().playSfx("click");
                    panelSetting.SetActive(false); // 隐藏设置面板
                    break;
            }
        }

        // 音效和音乐开关控制
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

        // 黑幕淡出动画
        void fadeOut()
        {
            mask.gameObject.SetActive(true);
            mask.color = Color.black;
            mask.DOFade(0, 1).OnComplete(fadeOutOver);
        }

        // 黑幕淡入动画并加载场景
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

        // 淡出完成，关闭遮罩
        void fadeOutOver()
        {
            mask.gameObject.SetActive(false);
        }

        // 手动调整遮罩透明度
        void OnUpdateTween(float value)
        {
            mask.color = new Color(0, 0, 0, value);
        }

        // 等待一帧再进入场景（兼容 WebGL）
        string startroom;
        IEnumerator waitaframe()
        {
            yield return new WaitForEndOfFrame();
            fadeIn(startroom);
        }
    }
}
