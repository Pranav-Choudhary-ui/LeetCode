// Last updated: 21/07/2026, 09:05:02
class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int closest = nums[0];
        int distance = abs(nums[0]) - 0;
        for(int i:nums){
            if(abs(i) - 0 < distance){
                closest = i;
                distance = abs(i) - 0;
            }
            else if(abs(i)-0 == distance){
                if(abs(i) > closest){
                    closest = i;
                }
            }
        }
        return closest;
    }
};