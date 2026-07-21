// Last updated: 21/07/2026, 09:05:21
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max = 0;
        int x = accounts[0].size();
        for(int i=0;i<accounts.size();i++){
            int sum = 0;
            for(int j=0;j<x;j++){
                sum = sum + accounts[i][j];
            }
            if(sum > max){
                max = sum;
            }
        }
        return max;
    }
};