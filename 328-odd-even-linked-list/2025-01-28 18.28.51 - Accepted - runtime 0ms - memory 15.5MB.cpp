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
    ListNode* oddEvenList(ListNode* head) {
        if(!head) return nullptr ;
         ListNode*  prev = nullptr , *temp = head , *dum = head ; 
         int val = 0 ;
         while(temp->next){
            temp = temp->next ; 
            val++ ; 
         }
         int cnt = 0 ; 
         while(cnt<=val){
            cnt++;
            if(cnt%2==0 && dum->next){
               ListNode*  front = dum;
               prev->next = front->next ; 
               front->next = nullptr;
               temp->next = front ;
               temp = temp->next ;  
               dum = prev->next;
            }else{
                prev = dum ;
                 dum = dum->next;
            }
         }
     return head ; 
    }
};