// Last updated: 21/07/2026, 09:07:03
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        return nums.size() > set(nums.begin(),nums.end()).size();
    }
};