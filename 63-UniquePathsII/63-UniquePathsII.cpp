// Last updated: 24/08/2026, 21:07:25
1class Solution {
2public:
3    int dp[101][101];
4    int possiblePaths(int m, int n, vector<vector<int>>& oG){
5        if(oG[m][n] == 1){
6            return 0;
7        }
8        if(m == 0 && n == 0){
9            return 1;
10        }
11
12        if(dp[m][n] != -1){
13            return dp[m][n];
14        }
15
16        if(m == 0){
17            return dp[m][n] = possiblePaths(m, n-1, oG);
18        }
19
20        if(n == 0){
21            return dp[m][n] = possiblePaths(m-1, n, oG);
22        }
23        return dp[m][n] = possiblePaths(m, n-1, oG) + possiblePaths(m-1, n, oG);
24
25    }
26    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
27        int m = obstacleGrid.size();
28        int n = obstacleGrid[0].size();
29        memset(dp, -1, sizeof(dp));
30        return possiblePaths(m-1, n-1, obstacleGrid);
31    }
32};
33