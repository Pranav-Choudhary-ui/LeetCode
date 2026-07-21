// Last updated: 21/07/2026, 09:06:30
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.length();
        vector<int> lps(n, 0);

        // build LPS
        int i = 1, j = 0;
        while (i < n) {
            if (s[i] == s[j]) {
                j++;
                lps[i] = j;
                i++;
            } else {
                if (j > 0) {
                    j = lps[j - 1];
                } else {
                    lps[i] = 0;
                    i++;
                }
            }
        }

        int len = lps[n - 1];

        return (len > 0 && n % (n - len) == 0);
    }
};