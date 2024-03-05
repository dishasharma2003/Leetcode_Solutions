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
    bool isPalindrome(ListNode* head) {
        ListNode* temp=head;
        stack<int>s;
        while(temp){
            s.push(temp->val);
            temp=temp->next;
        }
        ListNode* ptr=head;
        while(ptr){
            if(ptr->val!=s.top()){
                return false;
            }
            else{
                ptr=ptr->next;
                s.pop();
            }
        }
       return true; 
    }
};