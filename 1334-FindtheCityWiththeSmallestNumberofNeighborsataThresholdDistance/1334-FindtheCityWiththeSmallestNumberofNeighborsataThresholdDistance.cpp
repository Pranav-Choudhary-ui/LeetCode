// Last updated: 23/08/2026, 22:45:59
1class Solution {
2public:
3    void floydWarshall(vector<vector<int>> &dist) {
4        const int INF = 1e8;
5        int n = dist.size();
6        for(int k=0;k<n;k++){
7            for(int i=0;i<n;i++){
8                for(int j= 0;j<n;j++){
9                    if(dist[i][k] >= INF || dist[k][j] >= INF) continue;
10                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
11                }
12            }
13        }
14    }
15    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
16        int INF = 1e9;
17        vector<vector<int>> dist(n, vector<int>(n, INF));
18        for (int i = 0; i < n; i++) {
19            dist[i][i] = 0;
20        }
21
22        for (auto &edge : edges) {
23            int u = edge[0];
24            int v = edge[1];
25            int w = edge[2];
26
27            dist[u][v] = w;
28            dist[v][u] = w;
29        }
30
31        floydWarshall(dist);
32        vector<int> res(n);
33        for(int i=0;i<n;i++){
34            int count = 0;
35            for(int j=0;j<n;j++){
36                if(i != j && dist[i][j] > distanceThreshold) continue;
37                count++;
38            }
39            res[i] = count;
40        }
41
42        int ans = 0;
43        int minCount = INT_MAX;
44        for(int i = 0; i < n; i++) {
45            if(res[i] <= minCount) {
46                minCount = res[i];
47                ans = i;
48            }
49        }
50        return ans;
51    }
52};