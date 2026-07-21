// Last updated: 21/07/2026, 09:08:07
class Solution {
public:
    void permut(vector<int>& nums, int idx, vector<vector<int>>& res){
        if(idx == nums.size()){
            res.push_back(nums);
            return;
        }
        unordered_set<int> used;

        for(int i=idx;i<nums.size();i++){
            if(used.count(nums[i])){
                continue;
            }
            used.insert(nums[i]);

            swap(nums[idx], nums[i]);
            permut(nums,idx+1,res);
            swap(nums[idx], nums[i]);
        }
        return;
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> res;
        permut(nums,0,res);
        return res;
    }
};