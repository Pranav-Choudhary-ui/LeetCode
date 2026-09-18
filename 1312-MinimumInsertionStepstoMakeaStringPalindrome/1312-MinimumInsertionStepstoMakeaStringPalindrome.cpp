// Last updated: 18/09/2026, 16:46:31
1class Solution {
2public:
3    int dp[501][501];
4
5    int solve(string& s1, string& s2, int i, int j) {
6
7        if (i == s1.size() || j == s2.size()) {
8            return 0;
9        }
10
11        if (dp[i][j] != -1) {
12            return dp[i][j];
13        }
14
15        if (s1[i] == s2[j]) {
16            return dp[i][j] =
17                1 + solve(s1, s2, i + 1, j + 1);
18        }
19
20        return dp[i][j] = max(
21            solve(s1, s2, i + 1, j),
22            solve(s1, s2, i, j + 1)
23        );
24    }
25
26    int minInsertions(string s) {
27
28        string rev = s;
29        reverse(rev.begin(), rev.end());
30
31        memset(dp, -1, sizeof(dp));
32
33        int lps = solve(s, rev, 0, 0);
34
35        return s.size() - lps;
36    }
37};