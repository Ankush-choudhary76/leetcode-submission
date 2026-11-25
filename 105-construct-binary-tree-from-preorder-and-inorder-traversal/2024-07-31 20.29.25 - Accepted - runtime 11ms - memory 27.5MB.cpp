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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int,int>mpp;
        for(int i=0 ; i<inorder.size();i++){
            mpp[inorder[i]]= i ;
        }
     TreeNode* root = build(preorder , 0 , preorder.size()-1 , inorder , 0 , inorder.size()-1 , mpp);
     return root ; 
    }
    TreeNode* build(vector<int>&pre , int prestart , int preend , vector<int>&in , int instart , int inend ,
                                map<int,int>&mpp){
             if(prestart > preend || instart > inend ) return nullptr ;
             TreeNode* root = new TreeNode(pre[prestart]);
             int inroot = mpp[root->val];
             int num =  inroot - instart ;
             root->left = build(pre , prestart+1 , prestart+num , in , instart ,inroot-1 , mpp);
             root->right = build(pre , prestart + num + 1 , preend , in , inroot+1 , inend , mpp);
             return root ;
        }
};