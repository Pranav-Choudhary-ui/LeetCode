// Last updated: 10/10/2026, 20:02:19
1class Solution {
2public:
3    int dp[2501][2501];
4
5    int solve(vector<int>& nums, int i, int prev) {
6        if (i == nums.size())
7            return 0;
8
9        if (dp[i][prev + 1] != -1)
10            return dp[i][prev + 1];
11
12        if (prev == -1 || nums[i] > nums[prev]) {
13            int take = 1 + solve(nums, i + 1, i);
14            int notTake = solve(nums, i + 1, prev);
15            return dp[i][prev + 1] = max(take, notTake);
16        }
17        return dp[i][prev + 1] = solve(nums, i + 1, prev);;
18    }
19
20    int lengthOfLIS(vector<int>& nums) {
21        memset(dp, -1, sizeof(dp));
22        return solve(nums, 0, -1);
23    }
24};