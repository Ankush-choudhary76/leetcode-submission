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
    ListNode* partition(ListNode* head, int x) {
        ListNode* cur = new ListNode(-1);
        ListNode* cur1 = cur ;
         ListNode* dum=new ListNode(-1);
         ListNode* dum1 = dum ; 
        while(head){
            ListNode* nxt = head->next;
            if(head->val<x){

                cur1->next = head ;  
                cur1 = cur1->next;
                cur1->next = NULL;
            }else{
                dum1->next = head ;  
                dum1 = dum1->next;
                dum1->next=NULL; 
            }
            head = nxt ; 
        }
        cur1->next = dum->next ; 
        return cur->next ;
    } 
};