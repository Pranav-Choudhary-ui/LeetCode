// Last updated: 04/09/2026, 16:51:44
1class Solution {
2public:
3    int countPaths(int n, vector<vector<int>>& roads) {
4        const long long MOD = 1e9 + 7;
5
6        vector<vector<pair<int, int>>> adj(n);
7
8        for (auto &road : roads) {
9            int u = road[0];
10            int v = road[1];
11            int wt = road[2];
12
13            adj[u].push_back({v, wt});
14            adj[v].push_back({u, wt});
15        }
16
17        vector<long long> dist(n, LLONG_MAX);
18        vector<long long> ways(n, 0);
19
20        priority_queue<
21            pair<long long, int>,
22            vector<pair<long long, int>>,
23            greater<pair<long long, int>>
24        > pq;
25
26        dist[0] = 0;
27        ways[0] = 1;
28
29        pq.push({0, 0});
30
31        while (!pq.empty()) {
32            auto [d, node] = pq.top();
33            pq.pop();
34
35            if (d > dist[node])
36                continue;
37
38            for (auto [nei, wt] : adj[node]) {
39                long long newDist = d + wt;
40
41                if (newDist < dist[nei]) {
42                    dist[nei] = newDist;
43                    ways[nei] = ways[node];
44                    pq.push({newDist, nei});
45                }
46                else if (newDist == dist[nei]) {
47                    ways[nei] = (ways[nei] + ways[node]) % MOD;
48                }
49            }
50        }
51
52        return ways[n - 1];
53    }
54};