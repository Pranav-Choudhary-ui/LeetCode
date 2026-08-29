// Last updated: 29/08/2026, 16:49:44
1class Solution {
2public:
3    int findPeakElement(vector<int>& nums) {
4        int l = 0;
5        int h = nums.size()-1;
6
7        while(l<h){
8            int mid = l+(h-l)/2;
9            if(nums[mid] < nums[mid+1]){
10                l = mid+1;
11            }
12            else{
13                h = mid;
14            }
15        }
16        return l;
17    }
18};