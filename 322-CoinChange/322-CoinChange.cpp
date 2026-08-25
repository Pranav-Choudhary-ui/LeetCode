// Last updated: 25/08/2026, 17:40:02
1class Solution {
2public:
3    int dp[13][10001];
4    int solve(vector<int>& coins, int n, int amount) {
5        if (amount == 0)
6            return 0;
7
8        if (n == 0)
9            return 1e9;
10
11        if (dp[n][amount] != -1)
12            return dp[n][amount];
13
14        int notTake = solve(coins, n - 1, amount);
15        int take = 1e9;
16
17        if (coins[n - 1] <= amount) {
18            take = 1 + solve(coins, n, amount - coins[n - 1]);
19        }
20
21        return dp[n][amount] = min(take, notTake);
22    }
23
24    int coinChange(vector<int>& coins, int amount) {
25        memset(dp, -1, sizeof(dp));
26
27        int ans = solve(coins, coins.size(), amount);
28
29        return ans >= 1e9 ? -1 : ans;
30    }
31};