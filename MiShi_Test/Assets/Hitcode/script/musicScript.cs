using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class musicScript : MonoBehaviour
{
    // 静态变量，标记是否已加载该脚本的实例（实现单例）
    public static bool loaded = false;

    void Start()
    {
        // 如果已经有实例，则销毁自己，确保只存在一个 musicScript 对象
        if (loaded)
        {
            DestroyImmediate(gameObject);
            return;
        }

        // 不销毁当前对象，在场景切换时保留（全局音频管理器）
        DontDestroyOnLoad(gameObject);

        // 初始化音频列表
        asgroups = new List<AudioSource>();

        // 启动协程，定期回收音源
        StartCoroutine("recycle");

        loaded = true;
    }

    // 是否可以回收的标记（未使用）
    bool canRecycle = false;

    // 管理所有播放过的非循环音源
    List<AudioSource> asgroups;

    // 每 0.1 秒检查一次音源列表，如果超过 30 个，就回收最早的 15 个
    IEnumerator recycle()
    {
        while (true)
        {
            yield return new WaitForSeconds(0.1f);

            if (asgroups.Count > 30)
            {
                for (int i = 0; i < 15; i++)
                {
                    Destroy(asgroups[0]);        // 销毁 AudioSource 组件
                    asgroups.RemoveAt(0);        // 从列表中移除
                }
            }
        }
    }

    // 应用被暂停时的回调（如进入后台）
    void OnApplicationPause(bool pauseStatus)
    {
        // 原注释掉的逻辑可能用于展示广告或其他事件
        // 可用于播放暂停背景音乐、保存状态等
    }

    void Update()
    {
        // 当用户按下 ESC（安卓返回键）
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            Time.timeScale = 1;

            Debug.Log(Application.loadedLevelName); // 输出当前场景名称

            // 根据当前场景名称判断跳转到哪个界面
            if (Application.loadedLevelName.Substring(0, 5) == "level")
            {
                Application.LoadLevel("LevelMenu");
            }
            else if (Application.loadedLevelName == "LevelMenu")
            {
                Application.LoadLevel("MainMenu");
            }
            else if (Application.loadedLevelName == "MainMenu")
            {
                // 在主菜单不做跳转
            }
        }
    }

    /// <summary>
    /// 播放音效或背景音乐
    /// </summary>
    /// <param name="clip">要播放的音频片段</param>
    /// <param name="isloop">是否循环播放</param>
    /// <returns>返回播放该音频的 AudioSource</returns>
    public AudioSource PlayAudioClip(AudioClip clip, bool isloop = false)
    {
        if (clip == null) return null;

        AudioSource source;

        // 如果是循环播放（如背景音乐），检查是否已存在同名的音源
        if (isloop)
        {
            bool tExist = false;
            AudioSource[] as1 = GetComponentsInChildren<AudioSource>();
            foreach (AudioSource tas in as1)
            {
                if (tas && tas.clip)
                {
                    string clipname = (tas.clip.name);
                    if (clipname == clip.name)
                    {
                        source = tas;
                        tExist = true;
                        source.Play();    // 继续播放
                        return source;
                    }
                }
            }
        }

        // 添加新的音源组件
        source = gameObject.AddComponent<AudioSource>();
        source.clip = clip;

        // 设置音频参数
        source.minDistance = 1.0f;
        source.maxDistance = 50f;
        source.rolloffMode = AudioRolloffMode.Linear;
        source.transform.position = transform.position;
        source.loop = isloop;
        source.Play();

        // 如果不是循环播放的音效，加入回收队列
        if (!isloop)
        {
            asgroups.Add(source);
        }

        return source;
    }
}
