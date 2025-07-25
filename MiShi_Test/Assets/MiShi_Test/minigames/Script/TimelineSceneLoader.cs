using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.Playables;

public class TimelineSceneLoader : MonoBehaviour
{
    public PlayableDirector timelineDirector; // 拖入 Timeline 控制器
    public string nextSceneName = "Level01";  // 设置下一个场景名称

    void Start()
    {
        if (timelineDirector != null)
        {
            timelineDirector.stopped += OnTimelineStopped;
            timelineDirector.Play();
        }
        else
        {
            Debug.LogWarning("Timeline Director 未赋值！");
        }
    }

    void OnTimelineStopped(PlayableDirector director)
    {
        Debug.Log("Timeline 播放完成，跳转场景：" + nextSceneName);
        SceneManager.LoadScene(nextSceneName);
    }
}
