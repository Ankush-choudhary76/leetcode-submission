/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int cnt = 0;
    pair<int, int> solve(TreeNode* node) {
        if (node == nullptr)
            return {0, 0};
        auto left = solve(node->left);
        auto right = solve(node->right);
        int tot = node->val + left.first + right.first;
        int nodes = 1 + left.second + right.second;
        if (tot / nodes == node->val)
            cnt += 1;
        return {tot, nodes};
    }
    int averageOfSubtree(TreeNode* root) {
        auto p = solve(root);
        return cnt;
    }
};