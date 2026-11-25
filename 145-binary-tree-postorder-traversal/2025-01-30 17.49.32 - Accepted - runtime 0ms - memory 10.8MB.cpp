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
      void pt(TreeNode* root , vector<int>&arr){
         if(!root) return ; 
         pt(root->left , arr);
         pt(root->right , arr);
         arr.push_back(root->val);
      }
    vector<int> postorderTraversal(TreeNode* root) {
        if(!root) return {};
        vector<int>arr;
       pt(root , arr);
       return arr ; 
    }
};