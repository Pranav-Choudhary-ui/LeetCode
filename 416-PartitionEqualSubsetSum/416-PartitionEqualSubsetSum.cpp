// Last updated: 25/08/2026, 12:27:56
1class Solution {
2public:
3    int dp[201][10001];
4    bool solve(vector<int>& nums, int n, int target) {
5        if(target == 0)
6            return true;
7        if(n == 0)
8            return false;
9
10        if(dp[n][target] != -1)
11            return dp[n][target];
12
13        bool notTake = solve(nums, n - 1, target);
14        bool take = false;
15        if(nums[n - 1] <= target)
16            take = solve(nums, n - 1, target - nums[n - 1]);
17
18        return dp[n][target] = take || notTake;
19    }
20
21    bool canPartition(vector<int>& nums) {
22        int total = 0;
23
24        for (int x : nums)
25            total += x;
26
27        if (total % 2 != 0)
28            return false;
29
30        int target = total / 2;
31        memset(dp, -1, sizeof(dp));
32        return solve(nums, nums.size(), target);
33    }
34};