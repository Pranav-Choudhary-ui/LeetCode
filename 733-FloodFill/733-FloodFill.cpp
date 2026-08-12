// Last updated: 12/08/2026, 22:26:56
class Solution {
public:
    vector<vector<int>> moves = {
        {1,0}, {-1,0},
        {0,1}, {0,-1}
    };
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int m = image.size();
        int n = image[0].size();
        queue<pair<int, int>> q;
        vector<vector<int>> visited(m, vector<int> (n, 0));
        int oc = image[sr][sc];

        q.push({sr, sc});
        image[sr][sc] = color;
        visited[sr][sc] = 1;

        while(!q.empty()){
            auto node = q.front();
            q.pop();

            for(int i=0;i<moves.size();i++){
                int x = node.first + moves[i][0];
                int y = node.second + moves[i][1];
                if(m > x && x >= 0 && n > y && y >= 0){
                    if(!visited[x][y] && image[x][y] == oc){
                        image[x][y] = color;
                        visited[x][y] = 1;
                        q.push({x, y});
                    }
                }
            }
        }
        return image;
    }
};