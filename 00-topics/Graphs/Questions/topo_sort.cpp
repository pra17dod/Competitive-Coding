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
    void bfsCall(vector <T> &indegree, queue <T> &q) {
        while (!q.empty()) {
            T node = q.front();
            q.pop();
            cout << node << " ";
            for (auto it : adjacency_list[node]) {
                    indegree[it]--;
                    if (indegree[it] == 0)
                        q.push(it);
            }
        }
    }

public:
    void bfsTopo() {
        vector <T> indegree(vertices, 0);
        for (auto node_list : adjacency_list) {
            for (auto node : node_list) {
                indegree[node]++;
            }
        }
        queue <T> q;
        for (T i = 0; i < vertices; i++){
            if (indegree[i] == 0) {
                q.push(i);
            }
        }
        bfsCall(indegree, q);
    }

public:
    void dfsCall(T node, vector <T> &vis, stack <T> &topo) {
        vis[node] = 1;
        for (auto it : adjacency_list[node]) {
            if (vis[it] == 0) {
                dfsCall(it, vis, topo);

            }
        }
        topo.push(node);
    }

public:
    void dfsTopo() {
        vector <T> vis(vertices, 0);
        stack <T> topo;
        for (T i = 0; i < vertices; i++) {
            if (vis[i] == 0) {
                dfsCall(i, vis, topo);
            }
        }
        while (!topo.empty()) {
            cout << topo.top() << " ";
            topo.pop();
        }
        cout << endl;
    }
};

void solve(){
    // Creating directed graph
    int v, e;
    cin >> v >> e;
    DG<int> dg(v,e);
    dg.create();

    // Main logic
    dg.dfsTopo();
    dg.bfsTopo();
}


int main () {
    int t = 0;
    cin >> t;
    while (t--)
        solve();
    return 0;
}