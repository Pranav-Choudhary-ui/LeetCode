// Last updated: 20/10/2026, 10:11:45
1class Solution {
2public:
3    int minAddToMakeValid(string s) {
4        int open = 0, ans = 0;
5
6        for (char c : s) {
7            if (c == '(') {
8                open++;
9            } else {
10                if (open > 0) {
11                    open--;
12                } else {
13                    ans++;
14                }
15            }
16        }
17
18        return ans + open;
19    }
20};