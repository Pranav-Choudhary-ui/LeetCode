// Last updated: 21/07/2026, 09:05:10
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int j = nums.size();
        vector<int> ans(2*j);
        for(int i=0;i<nums.size();i++){
            ans[i] = nums[i];
            ans[j++] = nums[i];
        }
        return ans;
    }
};