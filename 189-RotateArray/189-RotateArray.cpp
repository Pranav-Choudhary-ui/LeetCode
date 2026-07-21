// Last updated: 21/07/2026, 09:07:15
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> res(n);
        int i = n;
        int j = 0;
        while(i--){
            int idx = (j+k)%n;
            res[idx] = nums[j++];
        }
        nums = res;
    }
};