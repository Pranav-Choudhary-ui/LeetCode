// Last updated: 23/09/2026, 12:22:08
1class Solution {
2public:
3    int minimumCost(vector<int>& cost) {
4        sort(cost.begin(), cost.end());
5
6        int i = cost.size()-1;
7        int count = 0;
8        int total = 0;
9        while(i>=0){
10            if(count == 2){
11                i--;
12                count = 0;
13                continue;
14            }
15            total += cost[i];
16            count++;
17            i--;
18        }
19        return total;
20    }
21};