// Last updated: 21/07/2026, 09:06:09
class Solution {
public:
    void generate_lps(string b, vector<int>& lps){

        int i = 1;
        int j = 0;
        lps[0] = 0;
        while(i < b.length()){
            if(b[i] == b[j]){
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

    bool strStr(string a, string b, vector<int>& lps) {

        int i = 0;
        int j = 0;

        while(i < a.length()){
            if(a[i] == b[j]){
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
            if(j == b.length()){
                return true;
            }
        }
        return false;
    }

    int repeatedStringMatch(string a, string b) {

        int count = 1;
        string x = a;
        while(x.size() < b.size()){
            x += a;
            count++;    
        }

        vector<int> lps(b.size());
        generate_lps(b, lps);

        if(strStr(x,b,lps)){
            return count;
        }

        x += a;
        if(strStr(x,b,lps)){
            return count+1;
        }
        return -1;
    }
};