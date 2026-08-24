// Last updated: 24/08/2026, 17:35:00
1class Solution {
2public:
3    int dp[101];
4    int solve(vector<int>& nums, int n){
5        if(n < 0){
6            return 0;
7        }
8        if(dp[n] != -1){
9            return dp[n];
10        }
11        // if(n == 0){
12        //     return dp[n] = nums[n];
13        // }
14        // if(n == 1){
15        //     return dp[n] = max(nums[0], nums[1]);
16        // }
17
18        int take = nums[n] + solve(nums, n-2);
19        int leave = solve(nums, n-1);
20        
21        return dp[n] = max(take, leave);
22    }
23    int rob(vector<int>& nums) {
24        if(nums.size() == 1){
25            return nums[0];
26        }
27        memset(dp, -1, sizeof(dp));
28        vector<int> a(nums.begin()+1, nums.end());
29        vector<int> b(nums.begin(), nums.end()-1);
30
31        int x = solve(a, a.size()-1);
32        memset(dp, -1, sizeof(dp));
33        int y = solve(b, b.size()-1);
34
35        return max(x, y);
36    }
37};
38