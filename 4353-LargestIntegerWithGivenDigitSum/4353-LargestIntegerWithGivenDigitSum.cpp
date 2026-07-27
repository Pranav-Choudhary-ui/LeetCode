// Last updated: 27/07/2026, 18:51:49
class Solution {
public:
    int largestInteger(int n, int s) {
        int dig = 9;
        int ans = 0;
        while(n > 0){
            if(s >= dig){
                ans = ans*10 + dig;
                s = s-dig;
                n--;
            }
            else{
                dig--;
            }
        }
        return s != 0 ? -1 : ans;
    }
};