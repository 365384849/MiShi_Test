using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Hitcode_RoomEscape;

public class PanelReadJournal : MonoBehaviour
{
    // Start 在游戏启动时调用一次
    void Start()
    {
        // 寻找 bg/btnCancel 添加 Cancel 按钮点击监听
        transform.Find("bg").Find("btnCancel").GetComponent<Button>()
            .onClick.AddListener(Cancel);
        // 寻找 bg/btnTake 添加 Take 按钮点击监听
        transform.Find("bg").Find("btnTake").GetComponent<Button>()
            .onClick.AddListener(Take);
    }

    // 当这个脚本所在 GameObject 被启用时调用
    private void OnEnable()
    {
        // 将 btnTake 按钮文本设置为本地化 "btnTake"
        transform.Find("bg").Find("btnTake").GetComponentInChildren<Text>()
            .text = Localization.Instance.GetString("btnTake");
        // 将 btnCancel 按钮文本设置为本地化 "btnCancel"
        transform.Find("bg").Find("btnCancel").GetComponentInChildren<Text>()
            .text = Localization.Instance.GetString("btnCancel");
    }

    // “拿走”按钮点击后的行为
    void Take()
    {
        // 通过 cName 获取当前日志数据
        JournalData tjournal = GameData.Instance.getJournalByName(cName);
        // 添加日志到玩家已拥有日志列表
        GameData.Instance.AddJournalByName(cName);
        // 恢复游戏时间
        Time.timeScale = 1;

        // 在 PlayerPrefs 中记录日志已拿取标记
        PlayerPrefs.SetInt(takedParam + 0, 1);
        // 隐藏当前 journal 对应 GameObject
        myJournal.SetActive(false);
        // 保存游戏进度
        GameData.Instance.SaveGame();
        // 启动挂起后解锁游戏逻辑协程
        StartCoroutine("waitUnlock");
    }

    // “取消”按钮点击后的行为
    void Cancel()
    {
        // 恢复游戏时间
        Time.timeScale = 1;
        // 启动挂起后解锁游戏逻辑协程
        StartCoroutine("waitUnlock");
    }

    // 协程：等待一帧后解锁游戏和隐藏面板
    IEnumerator waitUnlock()
    {
        // 等待一帧结束
        yield return new WaitForEndOfFrame();
        // 解锁游戏
        GameData.Instance.locked = false;
        // 隐藏日志阅读面板
        panelReadJournal.SetActive(false);
    }

    // 每帧 Update，如果不需要可删除
    void Update()
    {
    }

    // 当前查看的日志标题、内容 name 和 desc
    string cName, cDesc;

    // 当前日志阅读面板对象引用
    GameObject panelReadJournal;
    // Text 按钮上的本地化 key
    string takedParam = "";
    // 玩家点击的日志 GameObject
    GameObject myJournal;

    // 外部调用函数，用于显示日志内容，并设置面板 UI
    public void showPanel(GameObject journal, string take_param = "")
    {
        // 获取 GameUI 中已经拖好的 panelReadJournal 引用
        panelReadJournal = GameObject.Find("UICam")
            .transform.Find("Canvas")
            .GetComponent<GameUI>()
            .panelReadJournal;

        // 记录调用时传入的日志 GameObject 和参数名
        myJournal = journal;
        takedParam = take_param;

        // 显示面板
        panelReadJournal.SetActive(true);
        // 获取被点击日志的名字并查表获得 JournalData
        string journalName = journal.name;
        JournalData tjournal = GameData.Instance.getJournalByName(journalName);

        // 本地保存日志标题与内容
        cName = tjournal.journalName;
        cDesc = tjournal.journalDesc;

        // 设置标题和正文文本组件
        Text previewTitle = transform.Find("bg").Find("previewTitle").GetComponent<Text>();
        Text previewDesc = transform.Find("bg").Find("previewDesc").GetComponent<Text>();

        // 如果本地化 ID 存在，则使用本地化字符串，否则使用原始文本
        if (tjournal.nameLocalId != null && tjournal.nameLocalId.Trim() != "")
        {
            previewTitle.text = Localization.Instance.GetString(tjournal.nameLocalId);
            previewDesc.text = Localization.Instance.GetString(tjournal.localId);
        }
        else
        {
            previewTitle.text = cName;
            previewDesc.text = cDesc;
        }

        // 设置标题图标
        Image tIcon = previewTitle.transform.Find("icon").GetComponent<Image>();
        if (tjournal.icon != null)
        {
            tIcon.enabled = true;
            tIcon.sprite = tjournal.icon;
        }
        else
        {
            tIcon.enabled = false;
        }

        // 设置正文插图
        Image tIllustration = previewDesc.transform.Find("illustration").GetComponent<Image>();
        if (tjournal.illustration != null)
        {
            tIllustration.enabled = true;
            tIllustration.sprite = tjournal.illustration;
            tIllustration.SetNativeSize();
        }
        else
        {
            tIllustration.enabled = false;
        }

        // 设置 “拿走” 按钮是否可点击
        transform.Find("bg").Find("btnTake").GetComponent<Button>().interactable = take_param.Trim() != "";
        if (take_param.Trim() == "")
        {
            // 不可用时变灰
            transform.Find("bg").Find("btnTake").GetComponentInChildren<Text>().color = new Color(1, 1, 1, .3f);
        }
        else
        {
            // 可用时为正常颜色
            transform.Find("bg").Find("btnTake").GetComponentInChildren<Text>().color = new Color(1, 1, 1, 1);
        }

        // 暂停游戏，并锁定交互
        Time.timeScale = 0;
        GameData.Instance.locked = true;
    }
}
