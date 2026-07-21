// Last updated: 21/07/2026, 09:08:02
class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int i = s.length()-1;
        while(s[i] == ' '){
            i--;
        }
        while(i >= 0 && s[i] != ' ' && count >= 0){
            count++;
            i--;
        }
        return count;
    }
};