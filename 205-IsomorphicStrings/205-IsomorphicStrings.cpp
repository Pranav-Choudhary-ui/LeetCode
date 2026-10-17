// Last updated: 17/10/2026, 18:53:56
1class Solution {
2public:
3    bool isIsomorphic(string s, string t) {
4        unordered_map<char, char> mp;
5        unordered_set<char> used;
6
7        for (int i = 0; i < s.size(); i++) {
8            char a = s[i], b = t[i];
9
10            if (mp.count(a)) {
11                if (mp[a] != b) return false;
12            } else {
13                if (used.count(b)) return false;
14
15                mp[a] = b;
16                used.insert(b);
17            }
18        }
19
20        return true;
21    }
22};
23