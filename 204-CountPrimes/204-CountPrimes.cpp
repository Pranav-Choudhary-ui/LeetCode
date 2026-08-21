// Last updated: 21/08/2026, 21:11:22
1class Solution {
2public:
3    int countPrimes(int n) {
4        vector<bool> prime(n+1,true);
5        prime[0] = false;
6        prime[1] = false;
7        int count = 0;
8        for(int i=2;i<n;i++){
9            if(prime[i]==true){
10                count++;
11                for(int j=2*i;j<n;j=j+i){
12                    prime[j] = false;
13                }
14            }
15        }
16        return count;
17    }
18};