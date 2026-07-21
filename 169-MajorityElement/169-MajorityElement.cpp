// Last updated: 21/07/2026, 09:07:16
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;
        int n = nums.size();
        for(int i=0; i<n;i++){
            freq[nums[i]]++;
        }
        for(auto i:freq){
            if(i.second > n/2){
                return i.first;
            }
        }
        return -1;
    }
};