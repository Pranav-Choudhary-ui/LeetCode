// Last updated: 17/10/2026, 16:31:42
1// class Solution {
2// public:
3//     int minDays(vector<int>& bloomDay, int m, int k) {
4        
5//     }
6// };
7class Solution {
8public:
9    bool canMake(vector<int>& bloomDay, int m, int k, int days) {
10        int bouquets = 0;
11        int flowers = 0;
12
13        for (int day : bloomDay) {
14            if (day <= days) {
15                flowers++;
16
17                if (flowers == k) {
18                    bouquets++;
19                    flowers = 0;
20                }
21            } else {
22                flowers = 0;
23            }
24        }
25
26        return bouquets >= m;
27    }
28
29    int minDays(vector<int>& bloomDay, int m, int k) {
30        int n = bloomDay.size();
31
32        if (1LL * m * k > n) return -1;
33
34        int low = *min_element(bloomDay.begin(), bloomDay.end());
35        int high = *max_element(bloomDay.begin(), bloomDay.end());
36
37        int ans = -1;
38
39        while (low <= high) {
40            int mid = low + (high - low) / 2;
41
42            if (canMake(bloomDay, m, k, mid)) {
43                ans = mid;
44                high = mid - 1;
45            } else {
46                low = mid + 1;
47            }
48        }
49
50        return ans;
51    }
52};
53