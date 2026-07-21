// Last updated: 21/07/2026, 09:06:12
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> count(n+1,0);
        int dup = -1, miss = -1;

        for(int num : nums){
            count[num]++;
        }
        for(int i=1;i<=n;i++){
            if(count[i] == 0){
                miss = i;
            }
            if(count[i] == 2){
                dup = i;
            }
        }
        return {dup,miss};
    }
};