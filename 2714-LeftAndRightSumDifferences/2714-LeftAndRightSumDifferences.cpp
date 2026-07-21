// Last updated: 21/07/2026, 09:04:57
class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int total = 0;
        for (int x : nums) total += x;
        
        vector<int> ans;
        int left = 0, right = total;
        
        for (int x : nums) {
            right -= x;
            ans.push_back(abs(left - right));
            left += x;
        }
        
        return ans;
    }
};