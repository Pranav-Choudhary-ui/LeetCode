// Last updated: 21/07/2026, 09:05:03
class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int, int> mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++){
            int x = nums[i]-1;
            int y = nums[i]+1;
            if(mpp[x]==0 && mpp[y]==0 && mpp[nums[i]]==1){
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};