class Solution {
public:
    vector <bool> color, vis;
    
    bool dfs (int node, vector<vector<int>>& graph) {
        vis[node] = 1; 

        for (auto &i : graph[node]) {
            if (vis[i] == 0) {
                color[i] = !color[node];
                if (dfs(i, graph) == false) {
                    return false;
                }
            }
            else if (color[i] == color[node]) {
                return false;
            }
        }
        return true;
    }
        
    bool isBipartite(vector<vector<int>>& graph) {
        color.resize(graph.size(), 0);
        vis.resize(graph.size(), 0);
        for (int i = 0; i < graph.size(); i++) {
            if (graph[i].empty()) continue;
            if (dfs(i, graph) == false)
                return false;
        }
        return true;
    }
};