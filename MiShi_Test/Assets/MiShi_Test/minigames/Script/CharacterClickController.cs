using UnityEngine;
using UnityEngine.AI;

public class CharacterClickController : MonoBehaviour
{
    public Animator animator;
    public float idleDelay = 3f; // ��ú��л�Idle
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
        // 1. ��������
        if (Input.GetMouseButtonDown(0))
        {
            Ray ray = mainCam.ScreenPointToRay(Input.mousePosition);
            RaycastHit hit;

            if (Physics.Raycast(ray, out hit))
            {
                lastClickTime = Time.time;

                // 2. ����Լ�
                if (hit.collider.gameObject == gameObject)
                {
                    animator.SetTrigger("Talk");
                }
                // 3. �������Ŀ������
                else
                {
                    agent.SetDestination(hit.point);
                    animator.SetBool("Walk", true);
                }
            }
        }

        // 4. ����Ŀ�ĵغ�ֹͣ��·����
        if (agent != null && agent.remainingDistance <= agent.stoppingDistance && agent.hasPath)
        {
            animator.SetBool("Walk", false);
        }

        // 5. ��ʱδ����������Idle����
        if (Time.time - lastClickTime > idleDelay)
        {
            animator.SetBool("Walk", false);
            animator.ResetTrigger("Talk");
            animator.Play("Idle"); // ȷ����� Animator ���� Idle ����
        }
    }
}
