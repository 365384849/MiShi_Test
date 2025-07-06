using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro; // 引用 TextMeshPro 命名空间
using DG.Tweening;

namespace Hitcode_RoomEscape
{
    public class PanelTip : MonoBehaviour
    {
        private TextMeshProUGUI tipText; // 提示文本
        private CanvasGroup canvasGroup; // 控制淡入淡出透明度
        public float fadeDuration = 0.3f; // 动画持续时间

        void Start()
        {
            // 获取提示文字组件
            tipText = transform.Find("bg").Find("tipText").GetComponent<TextMeshProUGUI>();
            canvasGroup = GetComponent<CanvasGroup>();

            if (canvasGroup != null)
            {
                canvasGroup.alpha = 0f;
                gameObject.SetActive(false);
            }
        }

        void Update()
        {

        }

        private void OnEnable()
        {
            // 淡入提示面板
            if (canvasGroup != null)
            {
                canvasGroup.alpha = 0f;
                canvasGroup.DOFade(1f, fadeDuration);
            }
        }

        /// <summary>
        /// 显示提示内容（自动尝试本地化）
        /// </summary>
        public void ShowTip(string keyOrText)
        {
            string finalText = keyOrText;

            // 尝试从 Localization 获取翻译
            if (Localization.Instance != null)
            {
                string localized = Localization.Instance.GetString(keyOrText);
                if (!string.IsNullOrEmpty(localized) && localized != keyOrText)
                {
                    finalText = localized;
                }
            }

            if (tipText != null)
            {
                tipText.text = finalText;
            }
        }

        /// <summary>
        /// UI按钮点击统一处理
        /// </summary>
        public void OnClick(GameObject g)
        {
            switch (g.name)
            {
                case "btnCloseTip":
                    GameManager.getInstance().playSfx("flip");

                    // 淡出隐藏
                    if (canvasGroup != null)
                    {
                        canvasGroup.DOFade(0f, fadeDuration).OnComplete(() =>
                        {
                            gameObject.SetActive(false);
                            GameData.Instance.rm.delayUnlock();
                        });
                    }
                    else
                    {
                        gameObject.SetActive(false);
                        GameData.Instance.rm.delayUnlock();
                    }
                    break;
            }
        }
    }
}
