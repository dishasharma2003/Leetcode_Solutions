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
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;
       
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next; 
            if(fast==slow){
                break;
            }
        }
        if(fast==NULL ||fast->next==NULL){
            return NULL;
        }
        
        ListNode* node=head;
        while(node!=slow){
            node=node->next;
            slow=slow->next;
        }
        return node;
    }
    
};