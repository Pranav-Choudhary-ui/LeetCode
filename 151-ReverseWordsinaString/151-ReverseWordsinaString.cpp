// Last updated: 17/10/2026, 18:42:05
1
2class Solution {
3public:
4    string reverseWords(string s) {
5        stringstream ss(s);
6        string word;
7        string ans = "";
8
9        while (ss >> word) {
10            if (!ans.empty()) {
11                ans = word + " " + ans;
12            } else {
13                ans = word;
14            }
15        }
16
17        return ans;
18    }
19};
20