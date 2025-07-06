using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening; // 引用 DOTween 插件，用于 UI 动画控制

namespace Hitcode_RoomEscape
{
    public class GameUI : MonoBehaviour
    {
        // 定义 UI 所需的组件引用
        Image mask;               // 用于场景切换时的遮罩淡出效果
        Image currentUseImg;      // 预留：当前使用道具的图标
        Image currentImg;         // 背包中显示的当前道具图标
        float inventoryGridW;     // 背包按钮的宽度
        Image noneImg;            // 空图标（无道具时使用）

        void Start()
        {
            // 初始化 UI 时的遮罩淡出动画
            GameObject tmaskob = transform.Find("Mask").gameObject;
            if (tmaskob != null)
            {
                mask = tmaskob.GetComponent<Image>();
                mask.enabled = true;
                // 使用 DOTween 渐隐动画，完成后隐藏遮罩
                mask.DOFade(0, 1).OnComplete(() => { mask.enabled = false; });
            }

            // 获取当前道具图标组件
            currentImg = transform.Find("btnInventory").Find("currentItemImg").GetComponent<Image>();
            // 获取备用图标（无道具时使用）
            noneImg = transform.Find("btnInventory").Find("none").GetComponent<Image>();
            // 获取背包按钮宽度
            inventoryGridW = transform.Find("btnInventory").GetComponent<Image>().rectTransform.rect.width;

            // 等待一帧后注册 GameUI 到 GameData
            StartCoroutine("waitaframe");
        }

        // 延后一帧后注册 GameUI 引用，确保其它对象已初始化
        IEnumerator waitaframe()
        {
            yield return new WaitForEndOfFrame();
            GameData.Instance.gameUI = this;
        }

        // 初始化 UI 显示当前道具图标
        public void initView()
        {
            // 验证当前道具是否存在
            bool currentItemExist = false;
            foreach (Item tItem in GameData.getInstance().items)
            {
                if (tItem == null) return;
                if (tItem.itemName == GameData.Instance.currentItem)
                {
                    currentItemExist = true;
                }
            }

            // 若存在则显示对应图标，否则显示 none 图标
            if (currentItemExist && GameData.Instance.currentItem != null && GameData.Instance.currentItem != "")
            {
                currentImg.sprite = GameData.Instance.getItemByName(GameData.Instance.currentItem).itemIcon;
            }
            else
            {
                currentImg.sprite = noneImg.sprite;
                currentImg.SetNativeSize();
            }

            // 设置图标缩放，使其适配按钮容器
            if (currentImg != null)
            {
                currentImg.SetNativeSize();
                currentImg.transform.localScale = Vector3.one;

                float tw = currentImg.rectTransform.rect.width;
                float th = currentImg.rectTransform.rect.height;
                float tsize = Mathf.Max(tw, th);
                float tradio = inventoryGridW / tsize;
                tradio *= 0.9f; // 稍微缩小以避免贴边

                currentImg.transform.localScale *= tradio;
            }
        }

        // 每帧更新函数（当前未使用）
        void Update()
        {

        }

        // 可在 Inspector 中绑定的 UI 面板
        public GameObject panelInventory;     // 背包面板
        public GameObject panelText;          // 文本对话面板
        public GameObject itemTip;            // 道具提示
        public GameObject panelPause;         // 暂停面板
        public GameObject panelReadJournal;   // 阅读日志面板
        public GameObject panelTip;                // 提示按钮面板（新增功能预留）

            // [新增] 打开提示面板的函数
        public void ShowTipPanel()
        {
            if (GameData.Instance.locked) return;
            GameData.Instance.locked = true;
            panelTip.SetActive(true);
            GameManager.getInstance().playSfx("flip");
        }

        // [新增] 关闭提示面板的函数
        public void HideTipPanel()
        {
             Debug.Log("关闭提示面板被调用了"); // ✅ 调试日志
            panelTip.SetActive(false);
            GameData.Instance.rm.delayUnlock();
        }

        // UI 按钮点击事件统一处理
        public void OnClick(GameObject g)
        {
            // switch 根据按钮名称执行不同功能
            switch (g.name)
            {
                case "btnInventory":
                    // 打开/关闭背包
                    if (GameData.Instance.locked) return;
                    panelInventory.SetActive(!panelInventory.activeSelf);
                    GameManager.getInstance().playSfx("flip");
                    break;

                case "btnExitPreviousScene":
                    // 返回上一个摄像机视角
                    if (GameData.Instance.cameraList != null)
                    {
                        if (GameData.Instance.locked) return;
                        print(GameData.Instance.cameraList.Count);

                        // 如果摄像机堆栈多于1个，回退上一个视角
                        if (GameData.Instance.cameraList.Count > 1)
                        {
                            Camera tPrevCam = GameData.Instance.cameraList[GameData.Instance.cameraList.Count - 2];
                            Camera tCurrentCam = GameData.Instance.cameraList[GameData.Instance.cameraList.Count - 1];
                            if (tCurrentCam != null && tPrevCam != null)
                            {
                                tCurrentCam.enabled = false;
                                GameData.Instance.cameraList.RemoveAt(GameData.Instance.cameraList.Count - 1);
                                tPrevCam.enabled = true;
                            }
                        }

                        // 如果只剩一个视角，则隐藏返回按钮
                        if (GameData.Instance.cameraList.Count <= 1)
                        {
                            g.GetComponent<Image>().enabled = false;
                        }

                        // 清除文本并播放音效
                        GameData.Instance.rm.clearText();
                        GameManager.getInstance().playSfx("flip");
                    }
                    break;

                case "btnExitSubScene":
                    // 退出子场景
                    if (GameData.Instance.currentSubCam != null)
                    {
                        if (GameData.Instance.locked) return;
                        GameData.Instance.currentSubCam.enabled = false;
                        GameData.Instance.currentSubCam = null;

                        if (GameData.Instance.cameraList.Count <= 1)
                        {
                            GameObject.Find("btnExitPreviousScene").GetComponent<Image>().enabled = false;
                        }
                        else
                        {
                            GameObject.Find("btnExitPreviousScene").GetComponent<Image>().enabled = true;
                        }
                    }

                    // 关闭子场景 UI 和遮罩
                    GameObject.Find("SubSceneMask").GetComponent<Image>().enabled = false;
                    GameObject.Find("btnExitSubScene").GetComponent<Image>().enabled = false;
                    GameData.Instance.areaGame = false;

                    GameData.Instance.rm.clearText();
                    GameData.Instance.locked = true;
                    GameData.Instance.rm.delayUnlock();

                    GameManager.getInstance().playSfx("flip");

                    // 向所有子物体广播 subSceneClosed 消息
                    GameObject tg = GameObject.Find("gameContainer");
                    if (tg != null)
                    {
                        tg.BroadcastMessage("subSceneClosed", SendMessageOptions.DontRequireReceiver);
                    }
                    break;

                case "btnPause":
                    // 打开暂停面板并暂停游戏时间
                    if (GameData.Instance.locked) return;
                    GameData.Instance.locked = true;
                    Time.timeScale = 0;
                    panelPause.SetActive(true);
                    GameManager.getInstance().playSfx("flip");
                    break;

                // 预留摄像机切换按钮（已注释）
                // case "btnExitSubCam":
                //     ...
                    
                 case "btnTip": // [新增] 按下提示按钮
                    ShowTipPanel(); // [新增]
                    break;

                case "btnTipClose": // [新增] 提示面板的关闭按钮
                    HideTipPanel(); // [新增]
                    break;

            }
        }
    }
}
