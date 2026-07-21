// Last updated: 21/07/2026, 09:07:59
class Solution {
public:
    // vector<int> dp;
    // Solution() {
    //     dp.assign(46, -1);
    // }

    // int solve(int n){
    //     if(n == 1 || n == 2){
    //         return dp[n] = n;
    //     }
    //     if(dp[n] != -1){
    //         return dp[n];
    //     }
    //     return dp[n] = climbStairs(n-2) + climbStairs(n-1);
    // }
    int climbStairs(int n) {
        // return solve(n);

        // vector<int> dp(46,0);
        // dp[1] = 1;
        // dp[2] = 2;
        // for(int i=3;i<=n;i++){
        //     dp[i] = dp[i-1] + dp[i-2];
        // }
        // return dp[n];
        if (n <= 2) return n;

        int prev2 = 1;
        int prev1 = 2;

        for (int i = 3; i <= n; i++) {
            int cur = prev1 + prev2;
            prev2 = prev1;
            prev1 = cur;
        }
        return prev1;
    }
};