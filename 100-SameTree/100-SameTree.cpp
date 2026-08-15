// Last updated: 15/08/2026, 16:00:30
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
14    void solve(TreeNode* root, vector<int>& res){
15        if(root == NULL){
16            res.push_back(100000);
17            return;
18        }
19
20        res.push_back(root->val);
21        solve(root->left, res);
22        solve(root->right, res);
23    }
24    bool isSameTree(TreeNode* p, TreeNode* q) {
25        vector<int> res1;
26        vector<int> res2;
27        solve(p, res1);
28        solve(q, res2);
29        return res1 == res2;
30    }
31};