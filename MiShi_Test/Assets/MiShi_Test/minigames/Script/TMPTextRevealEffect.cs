using UnityEngine;
using TMPro;
using DG.Tweening;
using System.Collections;
using UnityEngine.SceneManagement;

public class TMPTextRevealEffect : MonoBehaviour
{
    public TextMeshProUGUI targetText;     // 要显示的 TextMeshProUGUI 组件
    [TextArea(3, 10)]
    public string fullText;                // 要逐个显示的完整文字
    public float charInterval = 0.05f;     // 每个字符显示的间隔时间（秒）
    public AudioClip typeSound;            // 打字音效（可选）
    public AudioSource audioSource;        // 用于播放音效或语音的 AudioSource
    public AudioClip fullVoiceClip;        // 模仿语音整段配音（AI生成）

    private bool isTyping = false;         // 当前是否处于打字中
    private bool hasFadedOut = false;      // 是否已执行过淡出
    private Coroutine fadeOutCoroutine;    // 自动淡出计时协程引用

    void Start()
    {
        // 播放完整语音（如果有）
        if (audioSource != null && fullVoiceClip != null)
        {
            audioSource.clip = fullVoiceClip;
            audioSource.Play();
        }

        StartCoroutine(RevealText());
    }

    void Update()
    {
        // 用户点击立即淡出（前提是打字完成且未淡出过）
        if (!isTyping && !hasFadedOut && Input.GetMouseButtonDown(0))
        {
            StartFadeOut();
        }
    }

    IEnumerator RevealText()
    {
        isTyping = true;
        targetText.text = "";
        targetText.alpha = 0f;

        // 淡入整个文本
        targetText.DOFade(1f, 1f);
        yield return new WaitForSeconds(0.5f);

        // 逐字显示内容 + 播放打字音效（可选）
        for (int i = 0; i < fullText.Length; i++)
        {
            targetText.text += fullText[i];

            // 如果没有整段语音，也可以播放逐字音效
            if (fullVoiceClip == null && typeSound != null && audioSource != null)
            {
                audioSource.PlayOneShot(typeSound);
            }

            yield return new WaitForSeconds(charInterval);
        }

        isTyping = false;

        // 启动自动淡出计时
        fadeOutCoroutine = StartCoroutine(AutoFadeOutAfterDelay(5f));
    }

    IEnumerator AutoFadeOutAfterDelay(float delay)
    {
        yield return new WaitForSeconds(delay);
        StartFadeOut();
    }

    void StartFadeOut()
    {
        if (hasFadedOut) return;
        hasFadedOut = true;

        // 如果协程还没执行，取消它
        if (fadeOutCoroutine != null)
        {
            StopCoroutine(fadeOutCoroutine);
        }

        // 执行淡出动画
        targetText.DOFade(0f, 1f).OnComplete(() =>
        {
            Debug.Log("Text fade-out completed. Loading Level01...");
            SceneManager.LoadScene("Level01");
        });
    }
}
