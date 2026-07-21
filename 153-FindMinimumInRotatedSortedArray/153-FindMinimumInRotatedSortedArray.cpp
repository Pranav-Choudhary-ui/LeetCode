// Last updated: 21/07/2026, 09:07:23
class Solution {
public:
    int findMin(vector<int> &nums) {
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
        return nums[l]; 
    }
};
