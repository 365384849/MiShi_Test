﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using DG.Tweening;

namespace Hitcode_RoomEscape
{
    public class RoomManager : MonoBehaviour
    {
        // 初始化函数
        void Start()
        {
            // 启动协程，等待一帧再初始化
            StartCoroutine("waitaframe");

            // 获取当前场景名
            string currentScene = SceneManager.GetActiveScene().name;

            // 如果当前不是主菜单，则记录当前场景名到本地（自动保存槽）
            if(currentScene != "MainMenu")
            {
                PlayerPrefs.SetString("quitSceneName" + 0, currentScene);
            }

            // 初始化游戏管理器
            GameManager.getInstance().init();
            GameManager.getInstance().stopAllSFX();

            // 重置游戏数据并赋值当前 RoomManager 实例
            GameData.Instance.resetData();
            GameData.Instance.rm = this;
        }

        // 等待一帧并初始化 UI 和相机
        IEnumerator waitaframe()
        {
            yield return new WaitForEndOfFrame();

            // 添加主相机到 cameraList
            GameData.getInstance().cameraList.Add(Camera.main.GetComponent<Camera>());

            // 查找 UI 摄像机并初始化界面
            GameObject UICam = GameObject.Find("UICam");
            if (UICam != null) {
                UICam.transform.Find("Canvas").GetComponent<GameUI>().initView();
            }

            // 如果有记录的相机位置，重置相机位置
            string cName = SceneManager.GetActiveScene().name;
            if (GameData.Instance.CameraDic.ContainsKey(cName))
            {
                GameData.Instance.cameraList[0].transform.position = GameData.Instance.CameraDic[cName];
            }

            // 获取语言设置并应用
            GameData.Instance.cLanguage = PlayerPrefs.GetInt("clanguage", 0);
            GameData.Instance.setLanguage();
        }

        // 清除 UI 上的提示文字
        public void clearText()
        {
            GameObject tUIText = GameObject.Find("UItipText");
            if (tUIText != null)
            {
                tUIText.GetComponent<Text>().text = "";
                tUIText.transform.parent.gameObject.SetActive(false);
                GameData.Instance.locked = false;
            }
        }

        // 每帧更新（未使用）
        void Update()
        {
        }

        // 播放背景音乐
        public void playsound()
        {
            GameManager.getInstance().playMusic("bgmusic");
        }

        int cTextIndex = 1; // 当前文字索引
        [HideInInspector]
        public string tempShowText; // 临时显示文字内容

        // 启动提示文字显示逻辑（打字机效果）
        public void playText()
        {
            cTextIndex = 1;
            GameObject.Find("UItipText").GetComponent<Text>().text = "";

            GameData.Instance.locked = true;

            if (GameData.Instance.typeGap > 0f)
            {
                GameData.Instance.Textlocked = true;
                GameData.Instance.locked = true;
                tempShowText = GameData.Instance.PlayTexts[0];
                cTextIndex = 1;

                GameManager.getInstance().stopSfx("typewriter");
                GameManager.getInstance().playSfx("typewriter");

                StopCoroutine("typeWrite");
                StartCoroutine("typeWrite");
            }
            else
            {
                allShowed();
            }
        }

        // 打字机文字逐字显示
        IEnumerator typeWrite()
        {
            while (cTextIndex < tempShowText.Length)
            {
                yield return new WaitForSeconds(GameData.Instance.typeGap);

                string tstr = tempShowText.Substring(0, cTextIndex);
                for (int i = 0; i < (tempShowText.Length - cTextIndex); i++)
                {
                    tstr += " ";
                }
                GameObject.Find("UItipText").GetComponent<Text>().text = tstr;
                cTextIndex++;

                if (cTextIndex == tempShowText.Length)
                {
                    allShowed();
                    StopCoroutine("typeWrite");
                }
            }
        }

        // 显示完整文字，跳过打字机效果
        public void showFull()
        {
            cTextIndex = tempShowText.Length;
            GameObject.Find("UItipText").GetComponent<Text>().text = tempShowText.Substring(0, cTextIndex);
            GameData.Instance.Textlocked = true;

            StopCoroutine("typeWrite");
            GameManager.getInstance().stopSfx("typewriter");

            GameData.Instance.PlayTexts.RemoveAt(0);
            cTextIndex = 0;
            StartCoroutine("unLock");
        }

        // 直接显示完整提示并解锁控制
        public void allShowed()
        {
            GameManager.getInstance().stopSfx("typewriter");

            if (GameData.Instance.PlayTexts.Count > 0)
            {
                GameObject.Find("UItipText").GetComponent<Text>().text = GameData.Instance.PlayTexts[0];
                GameData.Instance.PlayTexts.RemoveAt(0);
            }
            else
            {
                GameObject.Find("UItipText").GetComponent<Text>().text = "";
            }

            GameData.Instance.Textlocked = true;
            StartCoroutine("unLock");
            cTextIndex = 0;
        }

        // 播放获得物品提示效果
        public void playGetItemTip(string itemName)
        {
            GameData.Instance.gameUI.itemTip.SetActive(true);

            Image img1 = GameData.Instance.gameUI.itemTip.GetComponent<Image>();
            Image img2 = GameData.Instance.gameUI.itemTip.transform.Find("item").GetComponent<Image>();

            Item tItem = GameData.Instance.getItemByName(itemName);
            img2.sprite = tItem.itemIcon;

            img2.transform.localScale = Vector3.one;
            img2.SetNativeSize();

            float tgridW = img2.transform.parent.GetComponent<Image>().rectTransform.rect.width;
            float tw = img2.rectTransform.rect.width;
            float th = img2.rectTransform.rect.height;
            float tsize = Mathf.Max(tw, th);
            img2.transform.localScale *= tgridW / tsize;

            img1.color = new Color(1, 1, 1, 0);
            img2.color = new Color(1, 1, 1, 0);

            img1.DOFade(1, .3f).OnComplete(() => {
                img1.DOFade(0, .3f).SetDelay(.3f);
            });
            img2.DOFade(1, .3f).OnComplete(() => {
                img2.DOFade(0, .3f).SetDelay(.3f);
            });

            Image tipLightImg = GameData.Instance.gameUI.transform.Find("btnInventory").transform.Find("tipLight").GetComponent<Image>();
            tipLightImg.color = new Color(1, 1, 1, 0);
            tipLightImg.DOFade(1, .3f).SetDelay(.6f).OnComplete(() => {
                tipLightImg.DOFade(0, 1).SetDelay(.3f).OnComplete(() => {
                    tipLightImg.DOFade(0, .3f);
                });
            });

            GameManager.getInstance().playSfx("getitem");
        }

        // 解锁文字提示显示
        IEnumerator unLock()
        {
            yield return new WaitForEndOfFrame();
            GameData.Instance.Textlocked = false;
        }

        float delayTime;
        GameObject delayTarget;
        int actionId;

        // 延迟执行目标对象某个动作，并锁定控制
        public void lockDelay(float _delayTime, GameObject _target, int _actionId)
        {
            delayTarget = _target;
            actionId = _actionId;
            delayTime = _delayTime;
            StopCoroutine("delayGame");
            StartCoroutine("delayGame");
            GameData.Instance.locked = true;
        }

        // 实现延迟触发动作的协程
        IEnumerator delayGame()
        {
            yield return new WaitForSeconds(delayTime);
            GameData.Instance.locked = false;

            if (delayTarget != null)
            {
                Actions _actions = delayTarget.GetComponent<Actions>();
                _actions.playActionNow(actionId);
            }
        }

        // 延迟解锁控制
        public void delayUnlock()
        {
            StartCoroutine("waitUnlock");
        }

        // 0.3秒后解锁控制
        IEnumerator waitUnlock()
        {
            yield return new WaitForSeconds(.3f);
            GameData.Instance.locked = false;
        }

        // 当应用退出时保存当前场景名称（自动保存）
        void OnApplicationQuit() 
        {
            Debug.Log("Application ending after " + Time.time + " seconds");
            string currentScene = SceneManager.GetActiveScene().name;
            if (currentScene != "MainMenu")
            {
                PlayerPrefs.SetString("quitSceneName" + 0, currentScene);
            }
        }
    }
}
