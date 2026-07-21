// Last updated: 21/07/2026, 09:05:47
class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0){
            return 1;
        }
        int x = ~n;
        int a=0;
        while(n!=0){
            a = a<<1|1;
            n = n>>1;
        }
        return (a & x);
    }
};