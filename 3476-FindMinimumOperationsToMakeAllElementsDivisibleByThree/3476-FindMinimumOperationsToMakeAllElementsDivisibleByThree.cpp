// Last updated: 21/07/2026, 09:04:45
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int c = 0;
        for(int i=0;i<nums.size();i++){
            int m = nums[i]%3;
            if(m==0){
                continue;
            }
            else if(m==1 || m==2){
                c++;
            }
        }
        return c;
    }
};