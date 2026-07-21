// Last updated: 21/07/2026, 09:05:00
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_map<int, int> freq;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 0){
                continue;
            }
            freq[nums[i]]++;
        }
        return freq.size();
    }
};