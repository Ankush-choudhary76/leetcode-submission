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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans ;
        if(root == nullptr) return ans ;
        queue<TreeNode*>q;
        q.push(root);
         bool leftright = true ;
        while(!q.empty()){
            int size = q.size();
            vector<int>v(size);
            for(int i=0 ;i<size;i++){
                TreeNode* it = q.front();
                q.pop();
                int index = leftright ? i : size-i-1;
                v[index] = it->val;
                if( it->left) q.push(it->left);
                 if( it->right) q.push(it->right);
            }
            ans.push_back(v);
            leftright = !leftright ;
        }
        return ans ;
    }
};