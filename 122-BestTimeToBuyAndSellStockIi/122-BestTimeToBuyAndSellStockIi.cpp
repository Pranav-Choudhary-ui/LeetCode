// Last updated: 21/07/2026, 09:07:38
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = INT_MAX;
        int p;
        int profit = 0;

        for(int i=0;i<prices.size();i++){
            buy = min(buy,prices[i]);
            p = prices[i] - buy;
            if(p > 0){
                profit += p;
                buy = prices[i];
            }
        }
        return profit;
    }
};