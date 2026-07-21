// Last updated: 21/07/2026, 09:06:47
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;
        while(j < nums.size() && nums[j] != 0){
            j++;
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i] != 0 && j < i){
                swap(nums[j],nums[i]);
                j++;
                while(nums[j]!=0){
                    j++;
                }
            }
        }
    }
};