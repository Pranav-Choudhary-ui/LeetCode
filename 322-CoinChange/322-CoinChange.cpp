// Last updated: 21/07/2026, 09:06:45
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        const int INF = 1e9 + 7;
        vector<int> dp(amount+1, INF);
        dp[0] = 0;
        for(int i=0;i<coins.size();i++){
            for(int j=coins[i];j<=amount;j++){
                dp[j] = min(dp[j], 1 + dp[j-coins[i]]);
            }
        }
        if(dp[amount] == INF){
            return -1;
        }
        return dp[amount];
    }
};