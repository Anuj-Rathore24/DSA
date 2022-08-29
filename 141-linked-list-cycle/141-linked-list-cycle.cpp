/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *slow=head, *fast=head;
        bool result=false;
        while(slow&&fast){
            if(fast->next) fast=fast->next->next;
            else break;
            slow=slow->next;
            if(fast==slow){
                result=true;
                break;
            }
        }
        return result;
    }
};