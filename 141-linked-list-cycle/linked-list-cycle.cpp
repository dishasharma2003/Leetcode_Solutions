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
        ListNode* temp=head;
        unordered_set<ListNode*> list;
        while(temp!=NULL){
            if(list.find(temp)!=list.end()){
                return true;
            }
            else{
                list.insert(temp);
                temp=temp->next;
            }
        }
        return false;
        
    }
};