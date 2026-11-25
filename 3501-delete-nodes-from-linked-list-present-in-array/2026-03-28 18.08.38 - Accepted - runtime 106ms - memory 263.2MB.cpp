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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_map<int,int>mpp ; 
        for(auto it : nums){
            mpp[it]++;
        }
        ListNode* h2 = new ListNode(-1) ; 
        ListNode* h1 = h2;
        
        
        while(head!=NULL){
            if(mpp.find(head->val)==mpp.end()){
                h1->next = head ; 
                h1 = h1->next ; 
            }
            head = head->next ;
        }
        h1->next = NULL;
    return h2->next ; 
    }
};