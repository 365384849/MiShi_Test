using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

//是一个完整的背包管理脚本，实现了物品分页、动态生成物品槽、选中功能、使用和合成按钮逻辑，以及提示文本本地化展示，
//不仅管理 UI，还和游戏主逻辑（GameData、GameManager）紧密协作，构成了你游戏中重要的交互系统。

namespace Hitcode_RoomEscape
{
    public class PanelInventory : MonoBehaviour
    {
        // 用于实例化物品槽的预制物体
        public GameObject iconFrame;
        // 每页显示物品数量
        int perpage = 10;
        // 当前页码
        int cpage = 0;
        // 总页数
        int pages;

        // 当前页创建的槽对象列表
        List<GameObject> slots = new List<GameObject>();
        // 当前页对应的物品数据列表
        List<Item> itemsCpage = new List<Item>();

        // 面板、按钮、提示文本组件引用
        GameObject panel;
        Button btnCombine;
        Button btnUse;
        Button btnRight;
        Button btnLeft;
        Text itemText;

        private void Start()
        {
            // 初始化面板与按钮引用
            panel = transform.Find("panel").gameObject;
            btnCombine = panel.transform.Find("btnCombine").GetComponent<Button>();
            btnUse = panel.transform.Find("btnUse").GetComponent<Button>();
            btnLeft = panel.transform.Find("btnLeft").GetComponent<Button>();
            btnRight = panel.transform.Find("btnRight").GetComponent<Button>();
            Button btnClose = panel.transform.Find("btnClose").GetComponent<Button>();

            // 设置本地化按钮文本
            btnCombine.GetComponentInChildren<Text>().text = Localization.Instance.GetString("btnCombine");
            btnUse.GetComponentInChildren<Text>().text = Localization.Instance.GetString("btnUse");
            btnClose.GetComponentInChildren<Text>().text = Localization.Instance.GetString("btnClose");

            // 默认两个功能按钮不可点击
            btnCombine.interactable = false;
            btnUse.interactable = false;

            // 计算总页数（根据物品总数除以 perpage）
            pages = Mathf.FloorToInt((GameData.Instance.items.Count - 1) / 8f) + 1;

            // 更新翻页按钮状态
            btnRight.gameObject.SetActive(cpage < pages - 1);
            btnLeft.gameObject.SetActive(cpage > 0);

            // 获取提示文本组件引用
            itemText = panel.transform.Find("itemTip").GetComponent<Text>();
        }

        void OnEnable()
        {
            // 打开面板时重置当前页显示，并锁定游戏输入
            resetPage();
            GameData.Instance.locked = true;
        }

        void resetPage()
        {
            // 根据最新物品总数重新计算页数
            pages = Mathf.FloorToInt((GameData.Instance.items.Count - 1) / (float)perpage) + 1;

            // 清空并重新创建槽对象列表
            slots = new List<GameObject>();
            for (int i = 0; i < perpage; i++)
            {
                Transform tSlot = Instantiate(iconFrame).transform;
                tSlot.parent = iconFrame.transform.parent;
                tSlot.gameObject.name = i.ToString(); // 用名字保存槽索引
                tSlot.gameObject.SetActive(true);
                tSlot.transform.localScale = Vector3.one;
                slots.Add(tSlot.gameObject);

                // 如果是已选中的槽，显示为红色
                int tslotIndex = i + perpage * cpage;
                if (tslotIndex == activeIndex1 || tslotIndex == activeIndex2)
                {
                    tSlot.GetComponent<Image>().color = Color.red;
                }
            }

            // 填充物品图标到每个槽
            itemsCpage = new List<Item>();
            int n = 0;
            for (int i = cpage * perpage; i < cpage * perpage + perpage; i++)
            {
                if (i >= GameData.Instance.items.Count) break;

                Item tItem = GameData.Instance.items[i];
                if (tItem == null)
                {
                    // 如果数据不一致，清理并退出
                    GameData.Instance.clearSlot();
                    return;
                }
                Sprite image = tItem.itemIcon;
                GameObject tItemIcon = new GameObject();
                Image timg = tItemIcon.AddComponent<Image>();
                if (image != null)
                    timg.sprite = image;
                else
                    timg.color = new Color(1, 1, 1, .4f);

                // 设置图标位置与缩放
                tItemIcon.transform.parent = slots[n].transform;
                timg.transform.position = slots[n].transform.position;
                tItemIcon.transform.localScale = Vector3.one;
                timg.transform.localScale = Vector3.one;
                timg.SetNativeSize();

                float tgridW = timg.transform.parent.GetComponent<Image>().rectTransform.rect.width;
                float tw = timg.rectTransform.rect.width;
                float th = timg.rectTransform.rect.height;
                float tsize = Mathf.Max(tw, th);
                timg.transform.localScale *= tgridW / tsize;

                itemsCpage.Add(tItem);
                n++;
            }

            // 更新翻页按钮状态
            if (btnRight != null) btnRight.gameObject.SetActive(cpage < pages - 1);
            if (btnLeft != null) btnLeft.gameObject.SetActive(cpage > 0);
        }

        void clearPage(bool _clear = true)
        {
            // 若需清理选择状态，则取消对所有槽的高亮
            if (_clear)
            {
                unCheckPage();
            }

            // 删除已生成所有槽对象
            foreach (GameObject s in slots)
            {
                DestroyImmediate(s);
            }
        }

        void unCheckPage()
        {
            // 恢复所有槽颜色为默认白色，重置选中状态
            foreach (Transform tSlot in iconFrame.transform.parent)
            {
                tSlot.GetComponent<Image>().color = Color.white;
            }
            active1 = null;
            active2 = null;
            activeIndex1 = -1;
            activeIndex2 = -1;
            nActive = 0;

            // 禁用组合和使用按钮
            if (btnCombine != null) btnCombine.interactable = false;
            if (btnUse != null) btnUse.interactable = false;
        }

        void Update()
        {
            // 当前不使用
        }

        public void OnClick(GameObject g)
        {
            // 根据按钮名字处理点击事件
            switch (g.name)
            {
                case "btnClose":
                    clearPage();
                    gameObject.SetActive(false);
                    GameData.Instance.rm.delayUnlock();
                    GameManager.getInstance().playSfx("flip");
                    break;

                case "btnUse":
                    // 选中一个物品时，设为当前使用物品并保存
                    if (active1 != null)
                        GameData.Instance.currentItem = active1.itemName;
                    else
                        GameData.Instance.currentItem = active2.itemName;

                    PlayerPrefs.SetString("currentItem" + 0, GameData.Instance.currentItem);
                    clearPage();
                    gameObject.SetActive(false);
                    transform.parent.GetComponent<GameUI>().initView();
                    GameData.Instance.rm.delayUnlock();
                    GameManager.getInstance().playSfx("flip");
                    break;

                case "btnCombine":
                    // 选中两个物品时尝试合成
                    bool combinable = false;
                    for (int i = 0; i < GameData.Instance.bluePrints.Count; i++)
                    {
                        Blueprint tblue = GameData.Instance.bluePrints[i];
                        if (tblue.ingredientsName.Count == 2)
                        {
                            if ((tblue.ingredientsName[0] == active1.itemName && tblue.ingredientsName[1] == active2.itemName) ||
                                (tblue.ingredientsName[1] == active1.itemName && tblue.ingredientsName[0] == active2.itemName))
                            {
                                // 符合配方则删除原材料，添加成品
                                combinable = true;
                                GameData.Instance.items.Remove(active1);
                                GameData.Instance.items.Remove(active2);
                                Item tfinal = GameData.Instance.getItemByName(tblue.finalItemName);
                                GameData.Instance.items.Add(tfinal);
                                GameData.Instance.SaveGame();
                                clearPage();
                                resetPage();
                                GameData.Instance.currentItem = "";
                                PlayerPrefs.SetString("currentItem" + 0, GameData.Instance.currentItem);
                                GameData.Instance.gameUI.initView();
                                break;
                            }
                        }
                    }
                    // 若不可合成则取消选择
                    if (!combinable)
                        unCheckPage();

                    GameManager.getInstance().playSfx("flip");
                    break;

                case "btnRight":
                    if (cpage < pages)
                    {
                        cpage++;
                        clearPage(false);
                        resetPage();
                    }
                    GameManager.getInstance().playSfx("flip");
                    break;

                case "btnLeft":
                    if (cpage > 0)
                    {
                        cpage--;
                        clearPage(false);
                        resetPage();
                    }
                    GameManager.getInstance().playSfx("flip");
                    break;
            }

            // 每次点击按钮后更新物品描述提示
            showItemDesc();
        }

        // 当前已选中的物品（最多两个）
        Item active1 = null;
        Item active2 = null;

        // 被点击的槽对应的全局索引
        int activeIndex1 = -1;
        int activeIndex2 = -1;

        // 当前选中物品数量
        int nActive = 0;

        // 从 UI Inspector 拖入的用于显示物品提示的文本 GameObject
        public GameObject itemTip;

        // 槽点击事件，供外部槽对象触发
        public void clickSlot(GameObject g)
        {
            // 如果槽内没有物品则返回
            if (g.transform.childCount == 0)
                return;

            // 转换槽名为索引，从 itemsCpage 取对应物品
            int tslotItemId = int.Parse(g.name);
            Item cSlotItem = itemsCpage[tslotItemId];

            // 若选中超出两个，则重置为只剩当前点击项
            if (nActive >= 2)
            {
                if (activeIndex1 == cpage * perpage + tslotItemId || activeIndex2 == cpage * perpage + tslotItemId)
                {
                    // 是被再次点击的已选项，不做变化
                }
                else
                {
                    foreach (Transform tSlot in iconFrame.transform.parent)
                    {
                        tSlot.GetComponent<Image>().color = Color.white;
                    }
                    active1 = null;
                    active2 = null;
                    activeIndex1 = -1;
                    activeIndex2 = -1;
                    nActive = 0;
                }
            }

            Image tImage = g.GetComponent<Image>();
            if (tImage.color == Color.white)
            {
                // 选中槽时高亮并记录选中项
                tImage.color = Color.red;
                if (nActive < 2)
                {
                    if (activeIndex1 == -1)
                    {
                        active1 = cSlotItem;
                        activeIndex1 = cpage * perpage + tslotItemId;
                        nActive++;
                    }
                    else if (activeIndex2 == -1)
                    {
                        active2 = cSlotItem;
                        activeIndex2 = cpage * perpage + tslotItemId;
                        nActive++;
                    }
                }
            }
            else
            {
                // 取消选中槽时复原状态
                tImage.color = Color.white;
                if (nActive > 0)
                {
                    if (activeIndex1 == cpage * perpage + tslotItemId)
                    {
                        active1 = null;
                        activeIndex1 = -1;
                        nActive--;
                    }
                    else if (activeIndex2 == cpage * perpage + tslotItemId)
                    {
                        active2 = null;
                        activeIndex2 = -1;
                        nActive--;
                    }
                }
            }

            // 更新提示文本内容
            showItemDesc();

            // 设置按钮状态：一个选中 -> 用，可用两个选中 -> 可合成
            if (btnCombine != null) btnCombine.interactable = nActive == 2;
            if (btnUse != null) btnUse.interactable = nActive == 1;
        }

        void showItemDesc()
        {
            // 0 个选中：清空提示
            if (nActive == 0)
                itemText.text = "";
            // 1 个选中：显示该物品的描述
            else if (nActive == 1)
            {
                if (active1 != null)
                {
                    Item titem = GameData.Instance.getItemByName(active1.itemName);
                    showItemDesc(titem);
                }
                if (active2 != null)
                {
                    Item titem = GameData.Instance.getItemByName(active2.itemName);
                    showItemDesc(titem);
                }
            }
            // 多个选中：显示“多选提示”本地化文本
            else if (nActive > 1)
                itemText.text = Localization.Instance.GetString("multiselected");
        }

        void showItemDesc(Item tItem)
        {
            // 如果物品本地化 ID 为空便使用原始描述，否则获取本地化内容
            if (tItem.localId == "")
                itemText.text = tItem.itemDesc;
            else
                itemText.text = Localization.Instance.GetString(tItem.localId);
        }
    }
}
