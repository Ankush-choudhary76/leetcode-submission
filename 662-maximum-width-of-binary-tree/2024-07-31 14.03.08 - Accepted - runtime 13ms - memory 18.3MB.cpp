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
    int widthOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        queue<pair<TreeNode*,int>>q;
        long long ans  =0 ;
        q.push({root , 0});
        while(!q.empty()){
            int size = q.size();
            int mmin = q.front().second;
            int first , last ;
            for(int i=0 ; i<size;i++){
              long long   cur = q.front().second - mmin;
                TreeNode* node = q.front().first;
                q.pop();
                if(i==0) first = cur;
                if(i == size-1) last = cur ;
                if(node->left != nullptr) q.push({node->left , cur*2+1}) ;
                if(node->right != nullptr) q.push({node->right , cur*2+2}) ;
            }
            ans = max((long long)ans , (long long)last- (long long)first+1);
        }
        return ans ;
    }
};