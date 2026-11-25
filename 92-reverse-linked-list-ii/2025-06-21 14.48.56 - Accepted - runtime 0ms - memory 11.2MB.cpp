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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
      vector<int>arr;
      ListNode* temp =  head;
      int n = arr.size();
      int val = n-right;
      while(temp){
         arr.push_back(temp->val);
         temp = temp->next ; 
        }
        reverse(arr.begin()+(left-1), arr.begin()+right);
         ListNode* nn =  new ListNode(arr[0]);
         temp = nn ; 
         for(int i=1 ; i<arr.size();i++){
             temp->next = new ListNode(arr[i]);
             temp =temp->next ; 
             }
        return nn ;     
    }
};