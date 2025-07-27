using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.Timeline;

[TrackBindingType(typeof(TextMeshProUGUI))]
public class SubtitleTrack : TrackAsset
{
    // 你后续可以在这里添加 Clip 类型，比如:
    // public override Playable CreateTrackMixer(PlayableGraph graph, GameObject go, int inputCount)
    // 用于播放字幕逻辑
}
