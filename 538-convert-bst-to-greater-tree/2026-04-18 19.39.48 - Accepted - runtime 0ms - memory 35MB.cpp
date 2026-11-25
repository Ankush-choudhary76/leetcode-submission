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
     int prev =0 ; 
    void fun(TreeNode* root){
        if(!root) return ; 
        fun(root->right);
        prev+=root->val;
        root->val = prev; 
        fun(root->left);
    }
    TreeNode* convertBST(TreeNode* root) {
        fun(root);
        return root ; 
    }
};