/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
ListNode *reverseList(ListNode *head)
{
    ListNode *newHead=nullptr, *temp = head;
    if (temp)
    {
        stack<ListNode *> st;
        while (temp)
        {
            st.push(temp);
            temp = temp->next;
        }
        newHead = st.top();
        temp = newHead;
        st.pop();
        while (!st.empty())
        {
            temp->next = st.top();
            temp = temp->next;
            st.pop();
        }
        temp->next = nullptr;
    }
    return newHead;
}
};