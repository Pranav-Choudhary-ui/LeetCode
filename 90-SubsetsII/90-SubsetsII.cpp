// Last updated: 16/08/2026, 12:02:39
1class Solution {
2public:
3    void sub(vector<int> &nums, int index, vector<int> output, vector<vector<int>>& ans) {
4        if(index == nums.size()) {
5            ans.push_back(output);
6            return;
7        }
8
9        ans.push_back(output); // every point is a subset
10        for(int i=index;i<nums.size();i++){
11            if(i > index && nums[i] == nums[i-1]){
12                continue;
13            }
14            output.push_back(nums[i]);
15            sub(nums, i+1, output, ans);
16            output.pop_back();
17        }
18    }
19
20    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
21        sort(nums.begin(), nums.end());
22
23        vector<vector<int>> ans;
24        vector<int> output;
25
26        sub(nums, 0, output, ans);
27
28
29        return ans;
30    }
31};
32
33