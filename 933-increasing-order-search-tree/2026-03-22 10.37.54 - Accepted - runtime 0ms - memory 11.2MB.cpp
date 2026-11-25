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
     void find(TreeNode* root ,vector<int>&arr ){
        if(!root ) return ; 
        arr.push_back(root->val);
        find(root->left  , arr ); 
        find(root->right , arr ); 
     }
    TreeNode* increasingBST(TreeNode* root) {
        vector<int>arr; 
        find(root , arr ); 
        sort(arr.begin() , arr.end()); 
    
        int i = 1 ;
        TreeNode* r1 = new TreeNode(arr[0]);
        TreeNode* r2 = r1 ; 
        while(i<arr.size()){
            r2->right = new TreeNode(arr[i]);
            r2 = r2->right ; 
            i++;
        }
        return r1 ; 
    }
};