// Last updated: 15/08/2026, 12:59:17
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14    int solve(TreeNode* root, int& maxi){
15        if(!root){
16            return 0;
17        }
18
19        int l = solve(root->left, maxi);
20        int r = solve(root->right, maxi);
21        maxi = max(l+r, maxi);
22        return max(l, r) + 1;
23    }
24    int diameterOfBinaryTree(TreeNode* root) {
25        int maxi = INT_MIN;
26        solve(root, maxi);
27        return maxi;
28    }
29};
30