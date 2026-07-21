// Last updated: 21/07/2026, 09:05:32
class Solution {
public:
   void generate_lps(string s, vector<int>& lps){

        int i = 1;
        int j = 0;
        lps[0] = 0;
        while(i < s.length()){
            if(s[i] == s[j]){
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

    string longestPrefix(string s) {
        vector<int> lps(s.length());
        generate_lps(s, lps);
        string str = s.substr(0,lps[s.length()-1]);
        return str;
    }
};