// Last updated: 21/07/2026, 09:05:04
class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> left, mid, right;
        
        for (int x : nums) {
            if (x < pivot) left.push_back(x);
            else if (x == pivot) mid.push_back(x);
            else right.push_back(x);
        }
        
        left.insert(left.end(), mid.begin(), mid.end());
        left.insert(left.end(), right.begin(), right.end());
        
        return left;
    }
};