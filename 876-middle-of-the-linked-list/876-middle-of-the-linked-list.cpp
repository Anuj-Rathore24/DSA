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
    ListNode* middleNode(ListNode* head) {
        vector<ListNode*> st;
        struct ListNode *slow=head, *fast=head;
        while(fast){
            if(fast->next==nullptr||fast==nullptr) break;
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
    }
};