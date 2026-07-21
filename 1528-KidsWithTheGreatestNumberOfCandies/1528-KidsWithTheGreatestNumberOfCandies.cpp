// Last updated: 21/07/2026, 09:05:28
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi = *max_element(candies.begin(), candies.end());
        vector<bool> ans;
        
        for (int x : candies) {
            ans.push_back(x + extraCandies >= maxi);
        }
        
        return ans;
    }
};