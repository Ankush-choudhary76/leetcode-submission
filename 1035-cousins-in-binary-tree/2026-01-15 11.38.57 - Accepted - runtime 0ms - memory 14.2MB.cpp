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
    void fill(map<int,pair<int,int>>&mpp ,TreeNode* root , int level , int pre ){
        if(!root) return ; 
        mpp[root->val]= {level , pre};

        fill(mpp , root->left , level+1 , root->val);
         fill(mpp , root->right , level+1 , root->val);
    }
    bool isCousins(TreeNode* root, int x, int y) {
        map<int,pair<int,int>>mpp;
        fill(mpp , root  , 0 , -1 );
      
         if (mpp[x].first == mpp[y].first &&
            mpp[x].second != mpp[y].second) {
            return true;
        } 
    return false ; 
    }
};