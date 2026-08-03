// Last updated: 03/08/2026, 16:10:24
class Solution {
public:
    void solve(vector<int>& candidates, int target, vector<vector<int>>& ans, vector<int> current, int index){
        if(target == 0){
            ans.push_back(current);
            return;
        }
        
        for(int i=index;i<candidates.size();i++){
            if (i > index && candidates[i] == candidates[i - 1])
                continue;

            if (candidates[i] > target)
                break;

            current.push_back(candidates[i]);
            solve(candidates, target - candidates[i], ans, current, i+1);
            current.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans; 
        vector<int> current;
        sort(candidates.begin(), candidates.end());
        solve(candidates, target, ans, current, 0);
        return ans;
    }
};