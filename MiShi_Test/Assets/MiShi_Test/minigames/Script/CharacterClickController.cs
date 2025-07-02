using UnityEngine;
using UnityEngine.AI;

public class CharacterClickController : MonoBehaviour
{
    public Animator animator;
    public float idleDelay = 3f; // 多久后切回Idle
    private float lastClickTime;

    private NavMeshAgent agent;
    private Camera mainCam;

    void Start()
    {
        agent = GetComponent<NavMeshAgent>();
        mainCam = Camera.main;
        lastClickTime = Time.time;
    }

    void Update()
    {
        // 1. 检测鼠标点击
        if (Input.GetMouseButtonDown(0))
        {
            Ray ray = mainCam.ScreenPointToRay(Input.mousePosition);
            RaycastHit hit;

            if (Physics.Raycast(ray, out hit))
            {
                lastClickTime = Time.time;

                // 2. 点击自己
                if (hit.collider.gameObject == gameObject)
                {
                    animator.SetTrigger("Talk");
                }
                // 3. 点击其他目标物体
                else
                {
                    agent.SetDestination(hit.point);
                    animator.SetBool("Walk", true);
                }
            }
        }

        // 4. 到达目的地后停止走路动画
        if (agent != null && agent.remainingDistance <= agent.stoppingDistance && agent.hasPath)
        {
            animator.SetBool("Walk", false);
        }

        // 5. 超时未操作，播放Idle动画
        if (Time.time - lastClickTime > idleDelay)
        {
            animator.SetBool("Walk", false);
            animator.ResetTrigger("Talk");
            animator.Play("Idle"); // 确保你的 Animator 中有 Idle 动画
        }
    }
}
