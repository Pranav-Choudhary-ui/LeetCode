// Last updated: 21/07/2026, 09:06:42
class Solution {
public:
    void rev(vector<char>& s,int f,int e){
        if(f>=e){
            return;
        }
        swap(s[f],s[e]);
        rev(s,f+1,e-1);
    }
    void reverseString(vector<char>& s) {
        // int i = 0;
        // int j = s.size()-1;
        // while(i<j){
        //     swap(s[i++],s[j--]);
        // }
        rev(s,0,s.size()-1);
    }
};