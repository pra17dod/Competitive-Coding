class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        vector <vector <int>> dis (m, vector<int> (n, INT_MAX));
        vector <vector <int>> vis (m, vector<int> (n, 0));
        queue <pair<int,int>> q;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (mat[i][j] == 0) {
                    q.push({i,j});
                    dis[i][j] = 0;
                    vis[i][j] = 1;
                }
            }
        }
        int arry[] = {-1, 0, 1, 0 }; 
        int arrx[] = { 0, 1, 0, -1}; 
        
        while (!q.empty()) {
            int y = q.front().first;
            int x = q.front().second;
            q.pop();
            
            for (int i = 0; i < 4; i++) {
                int dy = y + arry[i];
                int dx = x + arrx[i];
                
                if (dy < m and dx < n and dy >= 0 and dx >= 0) {
                    if (dis[dy][dx] > dis[y][x] + 1) {
                        dis[dy][dx] = dis[y][x] + 1; 
                        if (vis[dy][dx] == 0) {
                            q.push({dy, dx});
                            vis[dy][dx] = 1;
                        }
                    }
                }
            }
        } 
        return dis;
    }
};