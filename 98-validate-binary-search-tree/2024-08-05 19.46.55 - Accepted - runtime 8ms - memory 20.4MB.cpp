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
    bool isvalid(TreeNode* root , long int maxval , long int minval){
        if(!root) return true ;
        if(root->val >= maxval || root->val <= minval) return false;
        return isvalid(root->left ,root->val,minval) && isvalid(root->right,maxval,root->val);
    }
    bool isValidBST(TreeNode* root) {
        long int n = LONG_MIN;
         long int m = LONG_MAX;
      return isvalid(root ,m,n);
        
    }
};