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
    ListNode* addTwoNumbers(ListNode* list1, ListNode* list2) {
        ListNode*  nn = new ListNode(-1);
         ListNode*  temp = nn ; 
        int carry =0 ; 
        while(carry || list1 || list2){
            int v = carry ; 
            if(list1){ v+=list1->val;
            list1 = list1->next ; 
            }
            if(list2){
                 v+=list2->val;
                 list2= list2->next ; 
            }
            temp->next = new ListNode(v%10);
            temp = temp->next ; 
            carry = v/10;
        }
        temp = nn ;
        nn = nn->next ; 
        delete temp ; 
        return nn ; 
    }
};