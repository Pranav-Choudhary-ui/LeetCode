// Last updated: 21/07/2026, 09:06:25
class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int m = s.length();
        string text2 = s;
        reverse(text2.begin(), text2.end());
        vector<int> prev(m+1, 0), curr(m+1, 0);

        for(int i=1;i<=m;i++){
            for(int j=1;j<=m;j++){
                if(s[i-1] == text2[j-1]){
                    curr[j] = 1 + prev[j-1];
                }
                else{
                    curr[j] = max(curr[j-1], prev[j]);
                }
            }
            prev = curr;
        }
        return prev[m];
    }
};