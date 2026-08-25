// Last updated: 25/08/2026, 12:00:45
1class Solution {
2public:
3    int dp[201][201];
4
5    int pathSum(vector<vector<int>>& triangle, int i, int j) {
6        if (i == triangle.size())
7            return 0;
8
9        if (dp[i][j] != 1e9)
10            return dp[i][j];
11
12        return dp[i][j] = triangle[i][j] +
13            min(pathSum(triangle, i + 1, j),
14                pathSum(triangle, i + 1, j + 1));
15    }
16
17    int minimumTotal(vector<vector<int>>& triangle) {
18        fill(&dp[0][0], &dp[0][0] + 201 * 201, 1e9);
19        return pathSum(triangle, 0, 0);
20    }
21};