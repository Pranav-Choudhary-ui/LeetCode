// Last updated: 21/07/2026, 09:08:17
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> myset(nums.begin(),nums.end());
        vector<int> num(myset.begin(),myset.end());
        nums = num;
        return myset.size();
    }
};