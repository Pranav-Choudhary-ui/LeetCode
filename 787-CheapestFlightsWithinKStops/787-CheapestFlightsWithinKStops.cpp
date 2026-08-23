// Last updated: 23/08/2026, 19:04:54
1class Solution {
2public:
3    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
4        vector<vector<pair<int, int>>> graph(n);
5
6        for(auto flight : flights) {
7            int from = flight[0];
8            int to = flight[1];
9            int wt = flight[2];
10
11            graph[from].push_back({to, wt});
12        }
13
14        queue<vector<int>> q;
15        vector<int> dist(n, INT_MAX);
16        dist[src] = 0;
17        q.push({0, src, 0});
18
19        while(!q.empty()) {
20
21            auto curr = q.front();
22            q.pop();
23            int stops_taken = curr[0];
24            int node = curr[1];
25            int dist_of_parent = curr[2];
26            if(stops_taken > k)
27                continue;
28
29            for(auto nbr_info : graph[node]) {
30                int nbr = nbr_info.first;
31                int wt = nbr_info.second;
32                int new_dist = dist_of_parent + wt;
33                if(new_dist < dist[nbr]) {
34                    dist[nbr] = new_dist;
35                    q.push({stops_taken + 1,nbr,new_dist});
36                }
37            }
38        }
39        return dist[dst] == INT_MAX ? -1 : dist[dst];
40    }
41};