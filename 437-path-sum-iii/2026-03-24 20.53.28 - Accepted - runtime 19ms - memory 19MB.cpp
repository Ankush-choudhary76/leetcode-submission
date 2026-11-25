/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int fun(TreeNode* root, long v) {
        if (!root)
            return 0;

       int cnt = (v == root->val) ? 1 : 0;
        
        cnt += fun(root ->left, v - root->val);
        cnt += fun(root ->right, v - root->val);

        return cnt;
    }
    int pathSum(TreeNode* root, int targetSum) {
         if(!root ) return 0 ; 
        return fun(root, targetSum) + pathSum(root->left, targetSum) +
               pathSum(root->right, targetSum);
    }
};