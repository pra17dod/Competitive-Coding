#include <bits/stdc++.h>
using namespace std;

template <typename T>
class DG {
private:
    T vertices;
    T edges;
    vector < vector <T> > adjacency_list;

public:
    DG(T _vertices, T _edges){
        vertices = _vertices;
        edges = _edges;
        for (T i = 0; i <= vertices; i++) {
            adjacency_list.push_back({});
        }
    }

public:
    void create() {
    for (T i = 0; i < edges; i++) {
        T node1, node2;
        cin >> node1 >> node2;
        addAdjacent(node1, node2);
    }
}

public:
    void addAdjacent(T parent, T node) {
        adjacency_list[parent].push_back(node);
    }

public:
    void print() {
        for (auto node_list : adjacency_list) {
            for (auto node : node_list) {
                cout << node << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

public:
    bool bfsCall(T node, vector <T> &vis) {
        vector <T> path(vertices, 0);
        queue <T> q;
        q.push(node);
        vis[node] = 1;
        while (!q.empty()) {
            T node = q.front();
            q.pop();
            path[node] = 1;
            for (auto it : adjacency_list[node]) {
                if (vis[it] == 0) {
                    vis[it] = 1;
                    q.push(it);
                }
                else if (vis[it] == 1 and path[it] == 1)
                    return true;
            }
        }
        return false;
    }

public:
    bool bfs() {
        vector <T> vis(vertices, 0);
        for (T i = 0; i < vertices; i++) {
            if (vis[i] == 0) {
                if (bfsCall(i, vis) == true){
                    return true;
                }
            }
        }
        return false;
    }

public:
    bool dfsCall(T node, vector <T> &vis, vector <T> &path) {
        vis[node] = 1;
        path[node] = 1;
        for (auto it : adjacency_list[node]) {
            if (path[it] == 0) {
                if (dfsCall(it, vis, path) == true)
                    return true;
            }
            else if (path[it] == 1)
                return true;
        }
        path[node] = 0;
        return false;
    }

public:
    bool dfs() {
        vector <T> vis(vertices, 0);
        vector <T> path(vertices, 0);
        for (T i = 0; i < vertices; i++) {
            if (vis[i] == 0)
                if (dfsCall(i, vis, path) == true)
                    return true;
        }
        return false;
    }
};

void solve(){
    // Creating directed graph
    int v, e;
    cin >> v >> e;
    DG<int> dg(v,e);
    dg.create();

    // Main logic

    bool ans1 = dg.dfs();
    bool ans2 = dg.bfs();
    if(ans1 and ans2)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

}


int main () {
    int t = 0;
    cin >> t;
    while (t--)
        solve();
    return 0;
}