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
    int claculate(TreeNode* root) {
        if(!root) return 0;
        int right = claculate(root->right);
        int left = claculate(root->left);
        return 1 + max(right,left);
    }
    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        int right = claculate(root->right);
        int left = claculate(root->left);
        return 1 + max(right,left);
    }
};
