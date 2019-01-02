#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <map>
#include <set>

using namespace std;

int main()
{

    system("pause");
    return 0;
}
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
//单链表反转
ListNode *ReturnListnode(ListNode *head)
{
    if (head == NULL)
        return;
    ListNode *preNode = NULL;
    ListNode *nextNode = NULL;
    while (head != NULL)
    {
        nextNode = head->next;
        preNode = nextNode->next;
        preNode = head;
        head = nextNode;
    }
    return preNode;
}
//判断是否有环1
bool CircleListnode(ListNode *head)
{
    if (head == NULL)
        return false;
    ListNode *fastNode = head;
    ListNode *slowNode = head;
    // while(head->next->next){
    //     fastNode=head->next->next;
    //     slowNode=head->next;
    //     head=head->next;
    //     if(fastNode==slowNode)
    //       return true;
    // }//应该以他们各自的节点作为基准
    while (fastNode && fastNode->next)
    {
        fastNode = fastNode->next->next;
        slowNode = slowNode->next;
        if (fastNode == slowNode)
            return true;
    }
    return false;
}
//判断是否有环2
bool CircleListnode(ListNode *head)
{
    set<ListNode *> hasCircle;
    if (head == NULL)
        return false;
    while (head)
    {
        if (hasCircle.find(head) != hasCircle.end())
            return true;
        else
        {
            hasCircle.insert(head);
            head=head->next;
        }
    }
    return false;
}