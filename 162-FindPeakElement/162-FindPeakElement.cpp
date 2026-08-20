// Last updated: 20/08/2026, 21:39:59
1class Solution {
2public:
3    int findPeakElement(vector<int>& nums) {
4        int l = 0;
5        int size = nums.size();
6        int h = size-1;
7
8        while(l<h){
9            int mid = l+(h-l)/2;
10            if(mid+1 < size && nums[mid] > nums[mid+1]){
11                h = mid;
12            }
13            else if(mid+1 < size && nums[mid] < nums[mid+1]){
14                l = mid+1;
15            }
16        }
17        return l;
18    }
19};