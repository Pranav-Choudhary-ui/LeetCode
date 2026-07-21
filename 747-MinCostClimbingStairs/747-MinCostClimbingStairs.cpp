// Last updated: 21/07/2026, 09:06:04
class Solution {
public:
    // vector<int> dp;
    // Solution(){
    //     dp.assign(1001,-1);
    // }
    // int solve(vector<int>& cost, int n){
    //     if(n <= 1){
    //         return dp[n] = 0;
    //     }
    //     if(dp[n] != -1){
    //         return dp[n];
    //     }
    //     return dp[n] = min(cost[n-2] + solve(cost,n-2), cost[n-1] + solve(cost, n-1));
    // }

    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        // return solve(cost, n);

        vector<int> dp(n+1,-1);
        dp[0] = 0, dp[1] = 0;

        for(int i=2;i<=n;i++){
            dp[i] = min(dp[i-2] + cost[i-2], dp[i-1] + cost[i-1]);
        }
        return dp[n];
    }
};