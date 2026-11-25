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
 int value(TreeNode* root , int sum ){
    if(!root) return 0;
    sum =sum * 10 + root->val;
    if(!root->left && !root->right){
        return sum ;
    }
    int lh = value(root->left , sum);
     int rh = value(root->right , sum);
     return lh + rh ;
 }
    int sumNumbers(TreeNode* root) {
        int sum =0;
        return value( root , sum );
    }
};