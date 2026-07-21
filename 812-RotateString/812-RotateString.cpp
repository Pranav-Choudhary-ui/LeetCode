// Last updated: 21/07/2026, 09:05:57
class Solution {
public:
    bool rotateString(string s, string goal) {
        return s.size() == goal.size() && (s+s).find(goal) < s.size();
    }
};