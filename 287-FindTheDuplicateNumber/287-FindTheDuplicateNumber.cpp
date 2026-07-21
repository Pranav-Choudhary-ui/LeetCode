// Last updated: 21/07/2026, 09:06:46
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int> tab;
        for(int i=0;i<nums.size();i++){
            tab[nums[i]]++;
        }
        for(pair i:tab){
            if(i.second>1){
                return i.first;
            }
        }
        return 0;
    }
};