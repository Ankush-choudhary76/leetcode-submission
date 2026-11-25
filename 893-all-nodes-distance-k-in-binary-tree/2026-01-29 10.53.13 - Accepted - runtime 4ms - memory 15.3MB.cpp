/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {

    
public:
     vector<int> bfsFromTarget(TreeNode* target,
                              unordered_map<TreeNode*, TreeNode*>& pMap,
                              int k) {

        queue<TreeNode*> q;
        unordered_set<TreeNode*> visited;

        q.push(target);
        visited.insert(target);

        int currentLevel = 0;

        while (!q.empty()) {
            int size = q.size();

            if (currentLevel++ == k)
                break;

            for (int i = 0; i < size; ++i) {
                TreeNode* node = q.front();
                q.pop();

                if (node->left && !visited.count(node->left)) {
                    visited.insert(node->left);
                    q.push(node->left);
                }

                if (node->right && !visited.count(node->right)) {
                    visited.insert(node->right);
                    q.push(node->right);
                }

                if (pMap.count(node) && !visited.count(pMap[node])) {
                    visited.insert(pMap[node]);
                    q.push(pMap[node]);
                }
            }
        }

        vector<int> result;
        while (!q.empty()) {
            result.push_back(q.front()->val);
            q.pop();
        }

        return result;
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        if (!root) return {};

        unordered_map<TreeNode*, TreeNode*> pMap;
        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            TreeNode* node = q.front();
            q.pop();

            if (node->left) {
                pMap[node->left] = node;
                q.push(node->left);
            }

            if (node->right) {
                pMap[node->right] = node;
                q.push(node->right);
            }
        }

        return bfsFromTarget(target, pMap, k);
    }
};
