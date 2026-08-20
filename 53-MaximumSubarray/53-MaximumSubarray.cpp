// Last updated: 20/08/2026, 23:51:38
1class Solution {
2public:
3    int maxSubArray(vector<int>& nums) {
4        int i = 0;
5        int maxi = INT_MIN;
6        int sum = 0;
7
8        while(i<nums.size()){
9            sum += nums[i];
10            maxi = max(maxi, sum);
11            if(sum < 0){
12                sum = 0;
13            } 
14            i++;
15        }
16        return maxi;
17    }
18};