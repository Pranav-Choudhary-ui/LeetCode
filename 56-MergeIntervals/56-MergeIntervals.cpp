// Last updated: 05/09/2026, 21:58:04
1class Solution {
2public:
3    vector<vector<int>> merge(vector<vector<int>>& intervals) {
4
5        sort(intervals.begin(), intervals.end());
6
7        vector<vector<int>> ans;
8
9        for (auto interval : intervals) {
10            if (ans.empty() || ans.back()[1] < interval[0]) {
11                ans.push_back(interval);
12            }
13            else {
14                ans.back()[1] =
15                    max(ans.back()[1], interval[1]);
16            }
17        }
18
19        return ans;
20    }
21};