// Last updated: 24/08/2026, 15:58:33
1class Solution {
2public:
3    int dp[101];
4    int solve(vector<int>& nums, int n){
5        if(n < 0){
6            return 0;
7        }
8        
9        if(dp[n] != -1){
10            return dp[n];
11        }
12        
13        // if(n == 0){
14        //     return dp[n] = nums[n];
15        // }
16        // if(n == 1){
17        //     return dp[n] = max(nums[0], nums[1]);
18        // }
19
20        int take = nums[n] + solve(nums, n-2);
21        int leave = solve(nums, n-1);
22        
23        return dp[n] = max(take, leave);
24    }
25    int rob(vector<int>& nums) {
26        memset(dp, -1, sizeof(dp));
27        return solve(nums, nums.size()-1);
28    }
29};