// Last updated: 03/08/2026, 16:10:28
class Solution {
public:
    void solve(vector<int>& candidates, int target, vector<vector<int>>& ans, vector<int> current, int index){
        if(target == 0){
            ans.push_back(current);
            return;
        }
        
        for(int i=index;i<candidates.size();i++){
            if(target >= candidates[i]){
                current.push_back(candidates[i]);
                solve(candidates, target - candidates[i], ans, current, i);
                current.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans; 
        vector<int> current;
        solve(candidates, target, ans, current, 0);
        return ans;
    }
};