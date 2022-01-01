#include <bits/stdc++.h>
using namespace std;

template <typename T>
class UG {
private:
    T vertices;
    T edges;
    vector < vector <T> > adjacency_list;

public:
    UG(T _vertices, T _edges){
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
        adjacency_list[node].push_back(parent);
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
    bool bfs() {
        vector <int> vis(vertices, 0);
        vector <int> par(vertices, -1);
        queue <T> q;
        q.push(0);
        vis[0] = 1;
        while (!q.empty()) {
            T node = q.front();
            T p = par[node];
            q.pop();
            for (auto it : adjacency_list[node]) {
                if (it != p and vis[it] == 1) {
                    return true;
                }
                else if (vis[it] == 0) {
                    par[it] = node;
                    vis[it] = 1;
                    q.push(it);
                }
            }
        }
        return false;
    }

public:
    bool dfsCall(T node, vector <int> &vis, vector <int> &par) {
        vis[node] = 1;
        T p = par[node];
        for (auto it : adjacency_list[node]) {
            if (it != p and vis[it] == 1) {
                return true;
            }
            else if (vis[it] == 0) {
                par[it] = node;
                if (dfsCall(it, vis, par) == true) {
                    return true;
                }
            }
        }
        return false;
    }

public:
    bool dfs() {
        vector <int> vis(vertices, 0);
        vector <int> par(vertices, -1);
        return dfsCall(0, vis, par);
    }
};


void solve(){
    // Creating undirected graph
    int v, e;
    cin >> v >> e;
    UG<int> ug(v,e);
    ug.create();
    // Main logic

    bool ans1 = ug.dfs();
    bool ans2 = ug.bfs();
    if(ans1)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    if(ans2)
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

