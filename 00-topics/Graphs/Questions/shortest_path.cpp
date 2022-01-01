// shortest path from a source to other nodes

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
    void bfs(T source, vector <T> &dis) {
        vector <int> vis(vertices, 0);
        queue <T> q;
        q.push(source);
        vis[source] = 1;
        dis[source] = 0;

        while (!q.empty()) {
            T node = q.front();
            T dist = dis[node];
            q.pop();
            for (auto it : adjacency_list[node]) {
                if (vis[it] == 0) {
                    q.push(it);
                    vis[it] = 1;
                    dis[it] = dist+1;
                }
            }
        }
    }

};

void solve(){
    // Creating undirected graph
    int v, e;
    cin >> v >> e;
    UG<int> ug(v,e);
    ug.create();

    int source = 0;
    cin >> source;

    // Main logic
    vector <int> dis(v,-1);
    ug.bfs(source, dis);

    for (auto i : dis) {
        cout << i << " ";
    }
    cout << endl;
}


int main () {
    int t = 0;
    cin >> t;
    while (t--)
        solve();
    return 0;
}


// Input

// 4 5
// 0 1
// 1 2
// 2 3
// 1 3
// 0 2

// 6 8
// 0 1
// 2 3
// 4 5
// 1 3
// 3 5
// 0 2
// 2 4
// 0 4

// Output

// 0 1 1 2

// 0 1 1 2 1 2