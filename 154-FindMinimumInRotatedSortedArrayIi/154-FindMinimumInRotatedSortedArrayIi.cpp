// Last updated: 21/07/2026, 09:07:21
class Solution {
public:
    int piv(vector<int> nums){
        int l = 0;
        int h = nums.size()-1;
        
        while(l<h){
            int mid = l+(h-l)/2;

            if(nums[mid] > nums[h]){
                l = mid+1;
            }
            else if(nums[mid] < nums[h]){
                h = mid;
            }
            else{
                h--;
            }
        }
        return l;
    }

    int findMin(vector<int>& nums) {
        if(nums[0]>=nums[nums.size()-1]){
            int pivot = piv(nums);
            return nums[pivot];
        }
        return nums[0];
    }
};