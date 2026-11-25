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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*  temp= new ListNode(-1);
         ListNode* dummy = temp ;
        int power = 0 ;
        while(l1 || l2 || power){
           int val = 0;
           if(l1) {
            val += l1->val ;
            l1= l1->next;
           } 
           if(l2){
            val+= l2->val ; 
             l2= l2->next ;
           }
           int rr = val + power ;
            dummy->next = new ListNode(rr % 10);
            power = rr/10;
              dummy = dummy->next;
        }
        
        return temp->next ;
    }
};