// Last updated: 21/07/2026, 09:04:42
class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int c = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2 == 0){
                c++;
            }
        }
        vector<int> res(nums.size(),0);
        for(int i=c;i<nums.size();i++){
            res[i] = 1;
        }
        return res;
    }
};