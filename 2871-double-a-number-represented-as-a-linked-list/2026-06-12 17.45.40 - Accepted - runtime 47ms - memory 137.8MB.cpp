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
    ListNode* rev(ListNode* head) {
        if (!head->next)
            return head;
        ListNode* nn = rev(head->next);
        ListNode* front = head->next;
        front->next = head;
        head->next = nullptr;
        return nn;
    }
    ListNode* doubleIt(ListNode* head) {
        ListNode* temp = rev(head);
       ListNode*  dum  = new ListNode(-1) ;
        head = dum ; 
       int carry = 0 ; 
        while(temp || carry ){
              int v =carry;
            if(temp){
                int a = (temp->val)*2  ;
                v +=a ;  
                temp = temp->next ;
            }
           
            dum->next = new ListNode(v%10);
            carry = v/10;
            dum = dum->next ; 
        }
        head = rev(head->next);
        return head ; 
    }
};