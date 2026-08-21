// Last updated: 21/08/2026, 21:35:25
1class Solution {
2public:
3    int countPrimes(int n) {
4        if (n < 3) {
5            return 0;
6        }
7        bool isprime[n];
8
9        memset(isprime, true, n);
10
11        int result = n / 2;
12        for (int i = 3; i * i < n; i += 2) {
13            if (isprime[i]) {
14                int d = i * 2;
15                for (int j = i * i; j < n; j += d) {
16                    if (isprime[j]) {
17                        isprime[j] = false;
18                        result--;
19                    }
20                }
21            }
22        }
23        return result;
24    }
25};