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
    void reorderList(ListNode* head) {
          if(head->next == nullptr) return ; 
         ListNode* nn = head;
          ListNode*  temp = head;
        vector<int>arr;
        while(nn ){
            arr.push_back(nn->val);
           nn= nn->next ; 
        }
        int i=1 ,j = arr.size()-2; 
            temp->next = new ListNode(arr[arr.size()-1]);
            temp = temp->next;
        while(i<=j){
            if(i==j){
              temp->next = new ListNode(arr[i]);
              temp = temp->next ;
            }else{
                temp->next = new ListNode(arr[i]);
                temp->next->next = new ListNode(arr[j]);
                temp = temp->next->next;
            }
            i++ ; j--;
        }
       
    }
};