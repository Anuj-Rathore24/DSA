// Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.

 

// Example 1:

// Input: head = [1,1,2]
// Output: [1,2]



// Solution-:
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head||!head->next) return head;
        unordered_map<int,int> table;
        unordered_map<int,int>::iterator itr;
        ListNode *temp=head,*temp2;
        ListNode *head2=new ListNode(head->val);
        temp2=head2;
        table.insert({head->val,1});
        while(temp){
            itr=table.find(temp->val);
            if(itr==table.end()){
                table.insert({temp->val,1});
                ListNode *newNode=new ListNode(temp->val);
                temp2->next=newNode;
                temp2=newNode;
            }
            temp=temp->next;    
        }

        return head2;
    }
};
