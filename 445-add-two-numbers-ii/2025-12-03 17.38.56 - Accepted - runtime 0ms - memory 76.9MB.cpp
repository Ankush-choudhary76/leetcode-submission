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
    ListNode*reverse(ListNode* head){
        if(!head->next) return head ; 
        ListNode* nn = reverse(head->next); 
        ListNode* front = head->next ; 
           head->next = NULL ; 
           front->next = head ; 
        return nn ; 

    }
    ListNode* addsum( ListNode*  l1, ListNode*  l2){
        ListNode* dum = new ListNode(-1);
        ListNode*  temp = dum ; 
        int cnt = 0 ;
         while(l1 || l2 || cnt){
            int d1 = l1!=NULL ?l1->val : 0 ; 
            int d2 = l2!=NULL ?l2->val : 0 ; 
             
             int val  = d1 + d2 + cnt ; 
             temp->next = new ListNode(val %10 );
             cnt = val/10 ; 
             temp = temp->next ; 
            if(l1) l1 =  l1->next;
            if(l2) l2 =  l2->next;

         }
        return  dum->next ; 
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
          l1 = reverse(l1);
          l2 = reverse(l2);
          ListNode* l3 = addsum(l1,l2);
          return reverse(l3);
    }
};