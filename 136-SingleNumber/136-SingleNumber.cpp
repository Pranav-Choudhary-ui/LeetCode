// Last updated: 21/07/2026, 09:07:33
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;
        for(int i=0;i<nums.size();i++){
            res = res ^ nums[i];
        }
        return res;
    }
};