// Last updated: 25/08/2026, 18:12:19
1class Solution {
2public:
3    int dp[1001][1001];
4    int solve(string& text1, string& text2, int i, int j) {
5        if (i == text1.size() || j == text2.size()) {
6            return 0;
7        }
8        if (dp[i][j] != -1) {
9            return dp[i][j];
10        }
11
12        if (text1[i] == text2[j]) {
13            return dp[i][j] = 1 + solve(text1, text2, i + 1, j + 1);
14        }
15        return dp[i][j] = max(
16            solve(text1, text2, i + 1, j),
17            solve(text1, text2, i, j + 1)
18        );
19    }
20
21    int longestCommonSubsequence(string text1, string text2) {
22        memset(dp, -1, sizeof(dp));
23        return solve(text1, text2, 0, 0);
24    }
25};