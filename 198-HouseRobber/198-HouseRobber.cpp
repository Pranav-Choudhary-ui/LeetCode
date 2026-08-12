// Last updated: 12/08/2026, 22:27:57
class Solution {
public:
    int dp[101];
    int solve(vector<int>& nums, int n){
        if(dp[n] != -1){
            return dp[n];
        }
        if(n == 0){
            return dp[n] = nums[n];
        }
        if(n == 1){
            return dp[n] = max(nums[0], nums[1]);
        }

        int take = nums[n] + solve(nums, n-2);
        int leave = solve(nums, n-1);
        
        return dp[n] = max(take, leave);
    }
    int rob(vector<int>& nums) {
        memset(dp, -1, sizeof(dp));
        return solve(nums, nums.size()-1);
    }
};