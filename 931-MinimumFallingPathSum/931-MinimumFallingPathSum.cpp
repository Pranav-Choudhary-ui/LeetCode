// Last updated: 18/09/2026, 11:13:36
1class Solution {
2public:
3    int dp[101][101];
4
5    int minPath(int i, int j, vector<vector<int>>& matrix) {
6
7        int n = matrix.size();
8
9        if (j < 0 || j >= n) {
10            return INT_MAX;
11        }
12
13        if (i == n - 1) {
14            return matrix[i][j];
15        }
16
17        if (dp[i][j] != INT_MAX) {
18            return dp[i][j];
19        }
20
21        int down = minPath(i + 1, j, matrix);
22        int left = minPath(i + 1, j - 1, matrix);
23        int right = minPath(i + 1, j + 1, matrix);
24
25        return dp[i][j] =
26            matrix[i][j] + min({down, left, right});
27    }
28
29    int minFallingPathSum(vector<vector<int>>& matrix) {
30
31        int n = matrix.size();
32
33        fill(&dp[0][0], &dp[0][0] + 101 * 101, INT_MAX);
34
35        int ans = INT_MAX;
36
37        for (int j = 0; j < n; j++) {
38            ans = min(ans, minPath(0, j, matrix));
39        }
40
41        return ans;
42    }
43};