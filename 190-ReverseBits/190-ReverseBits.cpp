// Last updated: 21/07/2026, 09:07:13
class Solution {
public:
    int reverseBits(int n) {
        int ans = 0;
        for (int i = 0; i < 32; i++) {
            ans = ans << 1;          
            ans = ans | n & 1;       
            n = n >> 1;          
        }
        return ans;
    }
};