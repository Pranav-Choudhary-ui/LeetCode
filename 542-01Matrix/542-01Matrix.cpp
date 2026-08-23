// Last updated: 23/08/2026, 17:43:41
1class Solution {
2public:
3
4    vector<vector<int>> moves = {
5        {1, 0},
6        {-1, 0},
7        {0, 1},
8        {0, -1}
9    };
10
11    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
12
13        int m = mat.size();
14        int n = mat[0].size();
15
16        queue<pair<int,int>> q;
17
18        vector<vector<int>> dist(
19            m, vector<int>(n, -1)
20        );
21
22        // Put ALL 0s into queue
23        for(int i = 0; i < m; i++) {
24            for(int j = 0; j < n; j++) {
25
26                if(mat[i][j] == 0) {
27                    q.push({i, j});
28                    dist[i][j] = 0;
29                }
30            }
31        }
32
33        // Multi-source BFS
34        while(!q.empty()) {
35
36            auto [y, x] = q.front();
37            q.pop();
38
39            for(auto move : moves) {
40
41                int ny = y + move[0];
42                int nx = x + move[1];
43
44                if(ny >= 0 && ny < m &&
45                   nx >= 0 && nx < n &&
46                   dist[ny][nx] == -1) {
47
48                    dist[ny][nx] =
49                        dist[y][x] + 1;
50
51                    q.push({ny, nx});
52                }
53            }
54        }
55
56        return dist;
57    }
58};