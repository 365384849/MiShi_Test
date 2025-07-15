using UnityEngine;
using System.Collections;
using System.Collections.Generic;

#if UNITY_EDITOR
using UnityEditor; // 仅在编辑器模式下引用 UnityEditor API，用于拓展 Inspector 等功能
#endif

namespace Hitcode_RoomEscape
{
    /// <summary>
    /// 游戏配置类：可附加在场景物体上，用于记录当前工程的配置数据
    /// </summary>
    [System.Serializable]
    public class Configure : MonoBehaviour
    {
        // （注释掉的字段是开发中计划添加的功能）

        // public ItemDataBaseList item;      // 游戏中的物品数据（物品数据库类）
        // public BlueprintDatabase craft;    // 合成系统的数据（合成蓝图数据库）

        /// <summary>
        /// 当前工程或项目的名称（用于识别、保存、加载配置等）
        /// </summary>
        public string currentProjectName = "";
    }
}
