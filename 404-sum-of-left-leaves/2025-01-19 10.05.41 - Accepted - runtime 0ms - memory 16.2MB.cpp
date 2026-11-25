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
     bool isleaf(TreeNode* root){
        return root && !root->left && !root->right ; 
     }
     int find(TreeNode* root  ){
        if(!root )return 0 ; 
        int left = 0 , right = 0 ; 
        if(root->left){
           left = isleaf(root->left) ? root->left->val : find(root->left) ; 
        }
        if(root->right){
           if( !isleaf(root->right))  right = find(root->right);
        }
        return left + right ; 
     }
    int sumOfLeftLeaves(TreeNode* root) {
           if( !root || isleaf(root)) return 0 ; 
          
           return find(root );
    }
};