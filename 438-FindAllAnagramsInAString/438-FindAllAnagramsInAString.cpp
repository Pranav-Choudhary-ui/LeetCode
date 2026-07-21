// Last updated: 21/07/2026, 09:06:34
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> res;
        vector<int> fs(26,0);
        vector<int> fp(26,0);
        int i=0, j=0;

        for(int k=0;k<p.length();k++){
            fp[p[k]-'a']++;
        }
        
        while(i<s.length()){
            fs[s[i]-'a']++;

            if(i-j == p.length()-1){
                if(fp == fs){
                    res.push_back(j);
                }
                fs[s[j]-'a']--;
                j++;
            }
            i++;
        }
        return res;
    }
};