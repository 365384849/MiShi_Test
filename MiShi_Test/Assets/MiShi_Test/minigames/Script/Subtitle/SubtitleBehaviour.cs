using TMPro;
using UnityEngine;
using UnityEngine.Playables;

public class SubtitleBehaviour : PlayableBehaviour
{
    public string subtitleText;
    private bool played = false;

    public override void ProcessFrame(Playable playable, FrameData info, object playerData)
    {
        if (played) return; // 只播放一次

        TextMeshProUGUI textUI = playerData as TextMeshProUGUI;
        if (textUI == null) return;

        GameObject go = textUI.gameObject;
        TypingEffectController typer = go.GetComponent<TypingEffectController>();
        if (typer == null)
            typer = go.AddComponent<TypingEffectController>();

        float duration = (float)playable.GetDuration(); // 每段字幕的持续时间
        typer.StartTyping(textUI, subtitleText, duration);

        played = true;
    }

    public override void OnBehaviourPause(Playable playable, FrameData info)
    {
        played = false; // 重置状态，下一次播放时重新触发
    }
}
