// Last updated: 03/09/2026, 17:27:07
1class Solution {
2public:
3    int solve(int i, int j, string &a, string &b, vector<vector<int>> &dp) {
4        if (i == a.size()) return b.size() - j;
5        if (j == b.size()) return a.size() - i;
6
7        if (dp[i][j] != -1) return dp[i][j];
8
9        if (a[i] == b[j])
10            return dp[i][j] = 1 + solve(i + 1, j + 1, a, b, dp);
11
12        return dp[i][j] = 1 + min(
13            solve(i + 1, j, a, b, dp),
14            solve(i, j + 1, a, b, dp)
15        );
16    }
17
18    string shortestCommonSupersequence(string str1, string str2) {
19        int n = str1.size();
20        int m = str2.size();
21
22        vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
23
24        for (int i = 0; i <= n; i++)
25            dp[i][m] = n - i;
26
27        for (int j = 0; j <= m; j++)
28            dp[n][j] = m - j;
29
30        solve(0, 0, str1, str2, dp);
31
32        string ans;
33        int i = 0, j = 0;
34
35        while (i < n && j < m) {
36            if (str1[i] == str2[j]) {
37                ans += str1[i];
38                i++;
39                j++;
40            }
41            else if (dp[i + 1][j] <= dp[i][j + 1]) {
42                ans += str1[i];
43                i++;
44            }
45            else {
46                ans += str2[j];
47                j++;
48            }
49        }
50
51        while (i < n)
52            ans += str1[i++];
53
54        while (j < m)
55            ans += str2[j++];
56
57        return ans;
58    }
59};