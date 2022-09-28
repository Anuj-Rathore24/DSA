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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp1=head,*temp2=head;
        int i=0,j=0,target;
        while(temp1){
            temp1=temp1->next;
            i++;
        };
        target=i-n;
        
        if(target==0){
            if(i==0) return nullptr;
            else{
                head=head->next;
                return head;
            }
        }
        while(j!=target){
            temp1=temp2;
            temp2=temp2->next;
            j++;
        }
        temp1->next=temp2->next;
        
        return head;
    }
};