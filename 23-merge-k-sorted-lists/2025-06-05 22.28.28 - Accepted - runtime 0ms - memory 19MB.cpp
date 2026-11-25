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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>temp ; 
        for(auto it : lists){
            ListNode* p = it ;
            while(p){
                temp.push_back(p->val);
                p = p->next ; 
            }
            
        }
        if(temp.size()==0) return NULL ;
         sort(temp.begin() , temp.end());
        ListNode*  head = new  ListNode(-1 );
        ListNode*  p = head ; 
        for( int i=0 ; i<temp.size();i++){
            p->next = new  ListNode(temp[i]);
            p = p->next ; 
        }
        return head->next ; 
    }
};