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
        if(!head || !head->next) return NULL ;
        map<ListNode *,int>mpp;
        ListNode *fast = head ; 
          while(fast ){
           if(mpp.find(fast)!= mpp.end()){
            return fast ; 
           }
           mpp[fast]++;
           fast = fast->next ; 
          }
          return NULL ; 
    }
};