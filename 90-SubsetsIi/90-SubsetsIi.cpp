// Last updated: 21/07/2026, 09:07:47
class Solution {
public:
    void sub(vector<int> &nums, int index, vector<int> output, set<vector<int>>& ans) {
        if(index >= nums.size()) {
            ans.insert(output);
            return;
        }

        sub(nums, index + 1, output, ans);
        output.push_back(nums[index]);
        sub(nums, index + 1, output, ans);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<vector<int>> ans;
        vector<int> output;

        sub(nums, 0, output, ans);

        vector<vector<int>> result(ans.begin(), ans.end());

        return result;
    }
};
