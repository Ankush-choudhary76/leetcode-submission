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
    int mini = INT_MAX;
    TreeNode* prev = NULL;

    void fun(TreeNode* root) {
        if (!root)
            return;

        fun(root->left);

        if (prev != NULL) {
            mini = min(mini, root->val - prev->val);
        }

        prev = root;

        fun(root->right);
    }

    int getMinimumDifference(TreeNode* root) {
        fun(root);
        return mini;
    }
};