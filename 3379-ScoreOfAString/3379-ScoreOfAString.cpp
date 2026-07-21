// Last updated: 21/07/2026, 09:04:46
class Solution {
public:
    int scoreOfString(string s) {
        int score = 0;
        for(int i=0; i<s.size()-1;i++){
            score += abs(s[i] - s[i+1]);
        }
        return score;
    }
};