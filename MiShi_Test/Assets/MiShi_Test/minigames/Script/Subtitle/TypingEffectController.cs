using System.Collections;
using TMPro;
using UnityEngine;

public class TypingEffectController : MonoBehaviour
{
    private Coroutine typingCoroutine; // 当前打字协程

    // 启动打字效果，totalDuration 为语音长度（逐字打字 + 淡出）
    public void StartTyping(TextMeshProUGUI textUI, string fullText, float totalDuration)
    {
        if (typingCoroutine != null)
            StopCoroutine(typingCoroutine);

        typingCoroutine = StartCoroutine(TypingCoroutine(textUI, fullText, totalDuration));
    }

    private IEnumerator TypingCoroutine(TextMeshProUGUI textUI, string fullText, float totalDuration)
    {
        textUI.text = "";
        textUI.alpha = 1f;

        float fadeDuration = totalDuration * 0.3f;                   // 30% 时间用于淡出
        float typingDuration = totalDuration - fadeDuration;        // 剩余 70% 时间用于打字
        float delayPerChar = typingDuration / Mathf.Max(fullText.Length, 1);

        // ----------- 打字阶段 -----------
        foreach (char c in fullText)
        {
            textUI.text += c;
            yield return new WaitForSeconds(delayPerChar);
        }

        // ----------- 淡出阶段 -----------
        float t = 0f;
        while (t < fadeDuration)
        {
            t += Time.deltaTime;
            float alpha = Mathf.Lerp(1f, 0f, t / fadeDuration);  // 渐隐
            textUI.alpha = alpha;
            yield return null;
        }

        // ----------- 清理 -----------
        textUI.text = "";
        textUI.alpha = 0f;
    }

    // 中断外部调用
    public void Clear()
    {
        if (typingCoroutine != null)
            StopCoroutine(typingCoroutine);
    }
}
