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
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*>q; 
        q.push(root);

        int val = 0  ; 

        while(!q.empty()){
            int n = q.size(); 
            bool flag = true ; 

            for(int i=0 ; i<n;i++){
                auto it = q.front();
                q.pop();
                if(flag){
                   val = it->val;
                   flag = false ; 
                }
                if(it->left) q.push(it->left);
                if(it->right)q.push(it->right);
            }
        }
        return val;
    }
};