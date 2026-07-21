// Last updated: 21/07/2026, 09:08:33
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> freq(256, 0);
        int maxi = 0;
        int i=0, j=0;
        while(i<s.length()){
            while(freq[s[i]] != 0){
                freq[s[j]]--;
                j++;
            }
 
            freq[s[i]]++;
            maxi = max(maxi, i-j+1);
            i++;
        }
        return maxi;
    }
};