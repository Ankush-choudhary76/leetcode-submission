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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* fun(vector<int>arr  , int left , int right ){
        if(left > right) return NULL ; 

        int mid = left+(right-left)/2 ; 

        TreeNode* node = new TreeNode(arr[mid]);
        node->left = fun(arr , left , mid-1);
        node->right = fun(arr , mid+1 ,right);

        return node ; 
        
    }
    TreeNode* sortedListToBST(ListNode* head) {
        if(!head) return NULL ;
        vector<int>arr ;
        while(head){
            arr.push_back(head->val);
            head = head->next ; 
        }
        return  fun(arr , 0 , arr.size()-1);
    }
};