// Last updated: 21/07/2026, 09:08:28
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int a = x;
        int ans=0;
        while(x!=0){
            int dig = x%10;
            if(ans>INT_MAX/10 || ans<INT_MIN/10){
                return false;
            }
            ans = ans*10 + dig;
            x = x/10;
        }
        if(a==ans){
            return true;
        }
        return false;
    }
};