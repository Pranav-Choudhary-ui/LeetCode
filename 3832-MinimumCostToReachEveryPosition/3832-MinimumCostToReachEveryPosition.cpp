// Last updated: 21/07/2026, 09:04:39
class Solution {
public:
    vector<int> minCosts(vector<int>& cost) {
        vector<int> ans;
        int prev = INT_MAX;
        for(int i=0;i<cost.size();i++){
            if(prev >= cost[i]){
                ans.push_back(cost[i]);
                prev = cost[i];
            }
            else{
                ans.push_back(prev);
            }
        }
        return ans;
    }
};