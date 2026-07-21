// Last updated: 21/07/2026, 09:08:11
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(target < nums[0]){
            return 0;
        }
        int s = 0;
        int e = nums.size()-1;
        int index = 0;
        while(s<=e){
            int mid = s+(e-s)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid] > target){
                e = mid-1;
            }
            else{
                index = mid;
                s = mid+1;
            }
        }
        return index+1;
    }
};