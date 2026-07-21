// Last updated: 21/07/2026, 09:08:13
class Solution {
public:

    int binary(vector<int>& nums, int target, int s, int e){
        int l = s;
        int h = e;
        int mid = l+(h-l)/2;
        while(l<=h){
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] > target){
                h = mid-1;
            }
            else{
                l = mid+1;
            }
            mid = l+(h-l)/2;
        }
        return -1;

    }

    int piv(vector<int> nums){
        int s = nums.size()-1;
        int l = 0, h = s;
        while(l<h){
            int mid = l+(h-l)/2;
            if(nums[mid] < nums[s]){ // nums[s] and nums[h] both works
                h = mid;
            }
            else if(nums[mid] > nums[s]){
                l = mid+1;
            }
        }  // l and h both works as both stops at same position at last in while loop
        return l;
    }

    int search(vector<int>& nums, int target) {
        int pivot = piv(nums);
        if(target <= nums[nums.size()-1]){
            return binary(nums,target,pivot,nums.size()-1);
        }
        else{
            return binary(nums,target,0,pivot-1);
        }
    }
};