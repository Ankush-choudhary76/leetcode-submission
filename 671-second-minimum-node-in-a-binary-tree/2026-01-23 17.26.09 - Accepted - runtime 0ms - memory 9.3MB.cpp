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
    void find(TreeNode* root , long long & f , long long & s ){
        if(!root ) return ; 
        if(root->val<f){
            s=f ; 
            f= root->val ; 
        }else if (root->val != f &&  root->val < s){
            s= root->val ;
        }
        find(root->left, f, s );
        find(root->right, f, s );
    }
    int findSecondMinimumValue(TreeNode* root) {
        long long  f =LONG_MAX , s = -1; 
        find(root , f, s );
        if(s==LONG_MAX) return -1 ; 
        return s ; 
    }
};