// Last updated: 18/10/2026, 20:45:02
1class Solution {
2public:
3    int minBitFlips(int start, int goal) {
4        int x = start ^ goal;
5        int count = 0;
6
7        while (x > 0) {
8            if(x&1){
9                count++;
10            }
11            x = x >> 1;
12        }
13
14        return count;
15    }
16};