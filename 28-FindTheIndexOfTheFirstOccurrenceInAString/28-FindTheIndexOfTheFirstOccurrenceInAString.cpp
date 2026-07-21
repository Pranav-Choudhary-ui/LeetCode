// Last updated: 21/07/2026, 09:08:15
class Solution {
public:
    void generate_lps(string needle, vector<int>& lps){

        int i = 1;
        int j = 0;
        lps[0] = 0;
        while(i < needle.length()){
            if(needle[i] == needle[j]){
                j++;
                lps[i] = j;
                i++;
            }
            else{
                if(j>0){
                    j = lps[j-1];
                }
                else{
                    lps[i] = j;
                    i++;
                }
            }
        }
    }

    int strStr(string haystack, string needle) {
        vector<int> lps(needle.length());
        generate_lps(needle, lps);

        int i = 0;
        int j = 0;

        while(i < haystack.length()){
            if(haystack[i] == needle[j]){
                i++;
                j++;
            }
            else{
                if(j>0){
                    j = lps[j-1];
                }
                else{
                    i++;
                }
            }
            if(j == needle.length()){
                return i-j;
            }
        }
        
        return -1;
    }
};