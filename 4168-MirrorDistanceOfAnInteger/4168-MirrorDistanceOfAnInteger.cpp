// Last updated: 21/07/2026, 09:04:31
class Solution {
public:
    int reverse(int n){
        int rev = 0;
        while(n != 0){
            int rem = n%10;
            rev = rev*10 + rem;
            n = n/10;
        }
        return rev;
    }
    int mirrorDistance(int n) {

        int rev = reverse(n);
        return abs(n-rev);
    }
};