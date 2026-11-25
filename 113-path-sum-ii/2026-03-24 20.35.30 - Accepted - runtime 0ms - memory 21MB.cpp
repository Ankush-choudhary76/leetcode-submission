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
    vector<vector<int>> ans ;
    void fun(TreeNode* root, int v ,  vector<int>&arr){
        if(!root) return ; 
        arr.push_back(root->val);
        v-=root->val;
        if (!root->left && !root->right) {
            if (v == 0) {
                ans.push_back(arr);
            }
        }
        fun(root->left ,v , arr);
        fun(root->right ,v, arr);
        arr.pop_back();

    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> arr;
        fun(root ,targetSum  , arr);
        return ans  ;
    }
};