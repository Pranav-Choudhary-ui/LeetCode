// Last updated: 21/07/2026, 09:08:08
class Solution {
public:
    void permut(vector<int>& nums, int idx, vector<vector<int>>& res){
        if(idx == nums.size()){
            res.push_back(nums);
            return;
        }

        for(int i=idx;i<nums.size();i++){
            swap(nums[idx], nums[i]);
            permut(nums,idx+1,res);
            swap(nums[idx], nums[i]);
        }
        return;
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        permut(nums,0,res);
        return res;
    }
};