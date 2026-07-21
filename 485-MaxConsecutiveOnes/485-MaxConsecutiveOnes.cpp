// Last updated: 21/07/2026, 09:06:29
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i = 0;
        int maxi = 0;
        while(i < nums.size()){
            int count = 0;
            if(nums[i] == 1){
                count++;
                i++;
                while(i < nums.size() && nums[i] == 1){
                    count++;
                    i++;
                }
                maxi = max(maxi, count);
            }
            else{
                i++;
            }
        }
        return maxi;
    }
};