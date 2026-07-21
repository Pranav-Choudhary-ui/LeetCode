// Last updated: 21/07/2026, 09:06:27
class Solution {
public:
    int s;
    int solve(vector<int>& nums, int target, int n, vector<vector<int>>& dp){
        if (abs(target) > s) return 0;
        
        if(n == 0){
            if(target == 0) return 1;
            return 0;
        }
        if(dp[n][target+s] != -1) return dp[n][target+s];
        
        if(nums[n-1] == 0) return dp[n][target+s] = 2 * solve(nums, target, n-1, dp);
        return dp[n][target+s] = solve(nums, target-nums[n-1], n-1, dp) 
                                + 
                               solve(nums, target+nums[n-1], n-1, dp);      
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        s = 0;

        for(int i:nums) s += i;

        if (abs(target) > s) return 0;

        vector<vector<int>> dp(n+1, vector<int>(2*s+1,-1));
        return solve(nums, target, n, dp);
    }
};