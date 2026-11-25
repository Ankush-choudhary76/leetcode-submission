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
        for(auto it : nums){
        mpp[it]++;
    }

    ListNode* dummy = new ListNode(-1);
    ListNode* temp = dummy;

    while(head != NULL){
        if(mpp.find(head->val) == mpp.end()){
            temp->next = head;
            temp = temp->next;
        }
        head = head->next;
    }

    temp->next = NULL; 

    return dummy->next;
    }
};