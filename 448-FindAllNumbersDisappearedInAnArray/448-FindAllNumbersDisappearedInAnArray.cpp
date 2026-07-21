// Last updated: 21/07/2026, 09:06:33
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int, int> freq;
        int n = nums.size();
        for(int i=1;i<=n;i++){
            freq[i] = 0;
        }
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        vector<int> res;
        for(auto i:freq){
            if(i.second == 0){
                res.push_back(i.first);
            }
        }
        return res;
    }
};