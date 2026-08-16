// Last updated: 16/08/2026, 11:17:24
1class Solution {
2public:
3    void solve(vector<int>& candidates, int target, vector<vector<int>>& ans, vector<int> current, int index){
4        if(target == 0){
5            ans.push_back(current);
6            return;
7        }
8        
9        for(int i=index;i<candidates.size();i++){
10            if(target >= candidates[i]){
11                current.push_back(candidates[i]);
12                solve(candidates, target - candidates[i], ans, current, i);
13                current.pop_back();
14            }
15        }
16    }
17    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
18        vector<vector<int>> ans; 
19        vector<int> current;
20        solve(candidates, target, ans, current, 0);
21        return ans;
22    }
23};