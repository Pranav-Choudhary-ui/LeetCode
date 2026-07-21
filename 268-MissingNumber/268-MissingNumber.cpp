// Last updated: 21/07/2026, 09:06:50
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int res = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            res = res ^ nums[i] ^ i;
        }
        res = res ^ n;

        return res;
    }
};