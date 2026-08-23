// Last updated: 23/08/2026, 17:43:51
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
22        for(int i = 0; i < m; i++) {
23            for(int j = 0; j < n; j++) {
24
25                if(mat[i][j] == 0) {
26                    q.push({i, j});
27                    dist[i][j] = 0;
28                }
29            }
30        }
31        while(!q.empty()) {
32
33            auto [y, x] = q.front();
34            q.pop();
35
36            for(auto move : moves) {
37
38                int ny = y + move[0];
39                int nx = x + move[1];
40
41                if(ny >= 0 && ny < m &&
42                   nx >= 0 && nx < n &&
43                   dist[ny][nx] == -1) {
44
45                    dist[ny][nx] =
46                        dist[y][x] + 1;
47
48                    q.push({ny, nx});
49                }
50            }
51        }
52
53        return dist;
54    }
55};