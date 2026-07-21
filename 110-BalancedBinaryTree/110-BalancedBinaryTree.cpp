// Last updated: 21/07/2026, 09:07:41
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
    pair<bool, int> dfs(TreeNode* root){
        if(!root){
            return {true, 0};
        }

        auto [lbal, lheight] = dfs(root->left);
        auto [rbal, rheight] = dfs(root->right);

        bool isbal = lbal && rbal && abs(lheight-rheight) <= 1 ;

        return {isbal, 1 + max(lheight, rheight)};

    }

    bool isBalanced(TreeNode* root) {
        return dfs(root).first;
    }
};