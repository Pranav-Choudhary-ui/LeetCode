// Last updated: 24/08/2026, 20:58:47
1class Solution {
2public:
3    int dp[101][101];
4    int possiblePaths(int m, int n){
5        if(m == 0 || n == 0){
6            return 1;
7        }
8
9        if(dp[m][n] != -1){
10            return dp[m][n];
11        }
12
13        // if(m == 1){
14        //     return dp[m][n] = possiblePaths(m, n-1);
15        // }
16
17        // if(n == 1){
18        //     return dp[m][n] = possiblePaths(m-1, n);
19        // }
20
21        return dp[m][n] = possiblePaths(m, n-1) + possiblePaths(m-1, n);
22
23    }
24    int uniquePaths(int m, int n) {
25        memset(dp, -1, sizeof(dp));
26        return possiblePaths(m-1, n-1);
27    }
28};