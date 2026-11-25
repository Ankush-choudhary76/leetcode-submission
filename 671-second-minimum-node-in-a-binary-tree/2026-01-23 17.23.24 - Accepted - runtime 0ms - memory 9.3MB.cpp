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
    void find(TreeNode* root ,  vector<int>&arr   ){
        if(!root ) return ; 
          arr.push_back(root->val);
        find(root->left, arr );
        find(root->right,arr );
    }
    int findSecondMinimumValue(TreeNode* root) {
        vector<int>arr; 
        find(root , arr);
        
           long long f=LONG_MAX,s = -1 ;
            for(int i=0 ; i<arr.size() ; i++){
                if(arr[i]<f){
                    s= f ; 
                    f= arr[i];
                }else if (f!= arr[i] && arr[i]<s){
                    s = arr[i];
                }
            }
            if(s== LONG_MAX) return -1 ; 
        return s ; 
    }
};