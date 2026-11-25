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
    ListNode* reverse(ListNode* head){
        if(!head || !head->next ) return head ; 
        ListNode* nn = reverse(head->next);
        ListNode* front = head->next  ; 
        front->next = head ; 
        head->next = nullptr ; 
        return nn ; 
         
    }
    bool isPalindrome(ListNode* head) {
       
        ListNode* slow = head;
        ListNode* fast =  head ; 
        while(fast->next && fast->next->next){
             fast = fast->next->next ; 
             slow = slow->next ;
        }
        ListNode* nn =reverse(slow->next);
        fast = head ; 
        slow = nn ; 
        while(slow!=nullptr){
             if(fast->val != slow->val){
                reverse(nn);
                return false ; 
             }
              fast = fast->next ; 
             slow = slow->next ;
        }
          reverse(nn);
        return true ; 
    }
};