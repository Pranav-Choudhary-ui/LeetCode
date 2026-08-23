// Last updated: 23/08/2026, 18:59:09
1class Solution {
2public:
3
4    int findCheapestPrice(int n,vector<vector<int>>& flights,int src,int dst,int k) {
5        const int INF = 1e9;
6        vector<int> dist(n, INF);
7        dist[src] = 0;
8        for(int i = 0; i <= k; i++) {
9            vector<int> temp = dist;
10            for(auto flight : flights) {
11                int u = flight[0];
12                int v = flight[1];
13                int price = flight[2];
14
15                if(dist[u] == INF)
16                    continue;
17                temp[v] = min(temp[v],dist[u] + price);
18            }
19            dist = temp;
20        }
21        if(dist[dst] == INF) return -1;
22        return dist[dst];
23    }
24};