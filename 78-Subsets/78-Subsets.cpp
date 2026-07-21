// Last updated: 21/07/2026, 09:07:52
class Solution {
public:
    void solve(vector<int> nums, vector<int> output, int i, vector<vector<int>>& res){
        if(i == nums.size()){
            res.push_back(output);
            return;
        }

        solve(nums, output, i+1, res);
        output.push_back(nums[i]);
        solve(nums, output, i+1, res);
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> output;
        solve(nums, output, 0, res);

        return res;
    }
};