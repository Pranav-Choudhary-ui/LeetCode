// Last updated: 26/08/2026, 09:09:17
1class Solution {
2public:
3    int minDistance(string word1, string word2) {
4        int n = word1.size();
5        int m = word2.size();
6
7        vector<vector<int>> dp(n + 1,
8                               vector<int>(m + 1, 0));
9
10        for (int i = 1; i <= n; i++) {
11            for (int j = 1; j <= m; j++) {
12
13                if (word1[i - 1] == word2[j - 1]) {
14                    dp[i][j] = 1 + dp[i - 1][j - 1];
15                }
16                else {
17                    dp[i][j] = max(dp[i - 1][j],
18                                   dp[i][j - 1]);
19                }
20            }
21        }
22
23        int lcs = dp[n][m];
24
25        return n + m - 2 * lcs;
26    }
27};