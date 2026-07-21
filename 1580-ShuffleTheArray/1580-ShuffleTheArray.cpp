// Last updated: 21/07/2026, 09:05:25
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        for(int i=0;i<(nums.size())/2;i++){
            ans.push_back(nums[i]);
            ans.push_back(nums[n]);
            n++;
        }
        return ans;
    }
};