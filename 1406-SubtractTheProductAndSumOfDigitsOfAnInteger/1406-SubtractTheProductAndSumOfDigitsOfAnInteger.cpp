// Last updated: 21/07/2026, 09:05:35
class Solution {
public:
    int subtractProductAndSum(int n) {
        int p=1;
        int s=0;
        while(n!=0){
            int dig = n%10;
            p = p*dig;
            s = s+dig;
            n = n/10;
        }
        return p-s;
    }
};