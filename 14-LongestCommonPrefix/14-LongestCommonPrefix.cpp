// Last updated: 17/10/2026, 18:45:05
1
2class Solution {
3public:
4    string longestCommonPrefix(vector<string>& strs) {
5        sort(strs.begin(), strs.end());
6
7        string first = strs[0];
8        string last = strs[strs.size() - 1];
9        string ans = "";
10
11        for (int i = 0; i < min(first.size(), last.size()); i++) {
12            if (first[i] != last[i]) {
13                break;
14            }
15            ans += first[i];
16        }
17
18        return ans;
19    }
20};
21