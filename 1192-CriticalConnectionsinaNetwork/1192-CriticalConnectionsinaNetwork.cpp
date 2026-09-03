// Last updated: 03/09/2026, 16:00:16
1class Solution {
2private:
3    int timer = 1;
4
5    void dfs(int node, int parent, vector<int> &vis,
6             vector<int> adj[], int tin[], int low[],
7             vector<vector<int>> &bridges) {
8
9        vis[node] = 1;
10        tin[node] = low[node] = timer;
11        timer++;
12
13        for (auto it : adj[node]) {
14            if (it == parent)
15                continue;
16
17            if (vis[it] == 0) {
18                dfs(it, node, vis, adj, tin, low, bridges);
19
20                low[node] = min(low[node], low[it]);
21
22                // node ---- it
23                if (low[it] > tin[node]) {
24                    bridges.push_back({it, node});
25                }
26            }
27            else {
28                low[node] = min(low[node], low[it]);
29            }
30        }
31    }
32
33public:
34    vector<vector<int>> criticalConnections(
35        int n, vector<vector<int>>& connections) {
36
37        vector<int> adj[n];
38
39        for (auto it : connections) {
40            adj[it[0]].push_back(it[1]);
41            adj[it[1]].push_back(it[0]);
42        }
43
44        vector<int> vis(n, 0);
45        int tin[n];
46        int low[n];
47
48        vector<vector<int>> bridges;
49        dfs(0, -1, vis, adj, tin, low, bridges);
50        return bridges;
51    }
52};