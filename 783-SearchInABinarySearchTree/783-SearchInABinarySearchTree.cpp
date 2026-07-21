// Last updated: 21/07/2026, 09:06:02
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
    TreeNode* searchBST(TreeNode* root, int val) {
        while(root){
            int x = root->val;
            if( x < val){
                root = root->right;
            }
            else if( x > val ){
                root = root->left;
            }
            else{
                return root;
            }
        }
        return NULL;
    }
};