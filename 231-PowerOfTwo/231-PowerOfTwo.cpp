// Last updated: 21/07/2026, 09:06:58
class Solution {
public:
    bool isPowerOfTwo(int n) {
        int c = 0;
        while(n!=0){
            if(n&1){
                if(c > 1){
                    return false;
                }
                c++;
            }
            n = n>>1;
        }
        if(c == 1){
            return true;
        }
        return false;
    }
};