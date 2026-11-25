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
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_map<int, pair<TreeNode*, int>> mp;

        for(auto &it : descriptions){
            int parent = it[0], child = it[1], isLeft = it[2];

            TreeNode* pNode;
            TreeNode* cNode;

           
            if(mp.find(parent) == mp.end()){
                pNode = new TreeNode(parent);
                mp[parent] = {pNode, 0};
            }
            pNode = mp[parent].first;

          
            if(mp.find(child) == mp.end()){
                cNode = new TreeNode(child);
                mp[child] = {cNode, 1};
            }
            cNode = mp[child].first;

            mp[child].second = 1;   
            if(isLeft) pNode->left= cNode;
            else pNode->right = cNode;
        }

       
        for(auto& [key, val] : mp){
            if(val.second == 0){
                return val.first;
            }
        }

        return nullptr;
    }
};