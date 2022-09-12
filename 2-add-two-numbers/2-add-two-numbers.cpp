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
    struct ListNode* result = NULL;
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int reminder=0,value,i=0;
        ListNode *temp1=l1,*temp2=l2,*result=NULL,*temp=result;
        while(temp1&&temp2){
            value=(temp1->val+temp2->val+reminder)%10;
            reminder=(temp1->val+temp2->val+reminder)/10;
            temp1=temp1->next;
            temp2=temp2->next;
            ListNode *newNode=new ListNode(value);
            if(temp) temp->next=newNode;
            else result=newNode;
            temp=newNode;
        }
        
        if(temp1){
            while(temp1){
                value=(temp1->val+reminder)%10;
                reminder=(temp1->val+reminder)/10;
                ListNode *newNode=new ListNode(value);
                temp1=temp1->next;
                if(temp) temp->next=newNode;
                else result=newNode;
                temp=newNode;
                
            }
        }
        if(temp2){
            while(temp2){
                value=(temp2->val+reminder)%10;
                reminder=(temp2->val+reminder)/10;
                ListNode *newNode=new ListNode(value);
                temp2=temp2->next;
                if(temp) temp->next=newNode;
                else result=newNode;
                temp=newNode;
                
            }
            
        }
        if(reminder>0){
            ListNode *newNode=new ListNode(1);
            if(temp) temp->next=newNode;
            else result=newNode;
            temp=newNode;
        }
        return result;
    }
};