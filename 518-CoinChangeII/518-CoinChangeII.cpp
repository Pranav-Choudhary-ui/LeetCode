// Last updated: 25/08/2026, 17:43:46
1class Solution {
2public:
3    int dp[301][5001];
4
5    int solve(vector<int>& coins, int n, int amount) {
6        if (amount == 0)
7            return 1;
8
9        if (n == 0)
10            return 0;
11
12        if (dp[n][amount] != -1)
13            return dp[n][amount];
14
15        int notTake = solve(coins, n - 1, amount);
16        int take = 0;
17
18        if (coins[n - 1] <= amount) {
19            take = solve(coins, n, amount - coins[n - 1]);
20        }
21
22        return dp[n][amount] = take + notTake;
23    }
24
25    int change(int amount, vector<int>& coins) {
26        memset(dp, -1, sizeof(dp));
27
28        return solve(coins, coins.size(), amount);
29    }
30};