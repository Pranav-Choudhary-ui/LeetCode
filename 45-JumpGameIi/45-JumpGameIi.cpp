// Last updated: 03/08/2026, 16:10:21
class Solution {
public:
    int jump(vector<int>& nums) {
        int far = 0;
        int c = 0;
        int end = 0;
        for(int i=0;i<nums.size()-1;i++){
            far = max(far, i+nums[i]);

            if(i == end){
                c++;
                end = far;
            }
        }
        return c;
    }
};