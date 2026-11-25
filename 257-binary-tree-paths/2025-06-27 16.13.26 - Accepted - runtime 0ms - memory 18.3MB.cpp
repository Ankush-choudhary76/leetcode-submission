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
   void fun(TreeNode* root ,vector<string>&arr , string  str  ){
        if(!root){
            return ;
         }
        int val = root->val;
         str = str + to_string(val) + "->";
        
         
        fun(root->left ,arr, str  );
        fun(root->right ,arr, str  );
        str.pop_back();
        str.pop_back();
        if(!root->left && !root->right) arr.push_back(str);
        str.pop_back();
        return ;
   }
    vector<string> binaryTreePaths(TreeNode* root) {
        if(!root) return {};
        string str ="";
        vector<string>arr ; 
        fun(root ,arr, str  );
        return arr ; 
    }
};