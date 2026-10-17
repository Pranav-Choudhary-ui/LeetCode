// Last updated: 17/10/2026, 16:31:48
1// class Solution {
2// public:
3//     int smallestDivisor(vector<int>& nums, int threshold) {
4        
5//     }
6// };
7class Solution {
8public:
9    bool isPossible(vector<int>& nums, int threshold, int divisor) {
10        int sum = 0;
11
12        for (int num : nums) {
13            sum += (num + divisor - 1) / divisor;
14
15            if (sum > threshold) return false;
16        }
17
18        return true;
19    }
20
21    int smallestDivisor(vector<int>& nums, int threshold) {
22        int low = 1;
23        int high = *max_element(nums.begin(), nums.end());
24        int ans = high;
25
26        while (low <= high) {
27            int mid = low + (high - low) / 2;
28
29            if (isPossible(nums, threshold, mid)) {
30                ans = mid;
31                high = mid - 1;
32            } else {
33                low = mid + 1;
34            }
35        }
36
37        return ans;
38    }
39};
40