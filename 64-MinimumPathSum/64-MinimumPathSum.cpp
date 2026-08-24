// Last updated: 24/08/2026, 21:44:32
1class Solution {
2public:
3    int dp[201][201];
4    int minCost(int m, int n, vector<vector<int>>& grid){
5        if(m == 0 && n == 0){
6            return grid[0][0];
7        }
8        if(dp[m][n] != -1){
9            return dp[m][n];
10        }
11        if(m == 0){
12            return dp[m][n] = grid[m][n] + minCost(m, n-1, grid);
13        }
14        if(n == 0){
15            return dp[m][n] = grid[m][n] + minCost(m-1, n, grid);
16        }
17
18        return dp[m][n] = grid[m][n] + min(minCost(m-1, n, grid), 
19                                            minCost(m, n-1, grid));
20    }
21    int minPathSum(vector<vector<int>>& grid) {
22        memset(dp, -1, sizeof(dp));
23        int m = grid.size();
24        int n = grid[0].size();
25        return minCost(m-1, n-1, grid);
26    }
27};