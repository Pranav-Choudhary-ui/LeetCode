// Last updated: 23/08/2026, 13:06:32
1class Solution {
2public:
3    int heightChecker(vector<int>& heights) {
4        vector<int> newHeights(heights.begin(), heights.end());
5        sort(newHeights.begin(), newHeights.end());
6        int count = 0;
7        for(int i=0;i<heights.size();i++){
8            if(heights[i] != newHeights[i]){
9                count++;
10            }
11        }
12        return count;
13    }
14};