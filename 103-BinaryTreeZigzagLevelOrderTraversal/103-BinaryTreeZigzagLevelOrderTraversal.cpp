// Last updated: 16/08/2026, 14:38:42
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
14    void solve(TreeNode* root, vector<vector<int>>& res){
15            queue<TreeNode*> q;
16
17            bool flag = false;
18            if(root) q.push(root);
19            while(!q.empty()){
20                flag = !flag;
21                int size = q.size();
22                vector<int> temp;
23                while(size--){
24                    TreeNode* node = q.front();
25                    temp.push_back(node->val);
26                    q.pop();
27
28                    if(node->left) q.push(node->left);
29                    if(node->right) q.push(node->right);
30            }
31            if(!flag){
32                reverse(temp.begin(), temp.end());
33            }
34            res.push_back(temp);
35        }
36    }
37
38    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
39        vector<vector<int>> res;
40        solve(root, res);
41        return res;
42    }
43};