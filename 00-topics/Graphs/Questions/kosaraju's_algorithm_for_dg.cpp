#include <bits/stdc++.h>
using namespace std;

// Kosoraju's Algorithm to find all the
// strongly connected components (SCC)

template <typename T>
class DG {
private:
    T vertices;
    T edges;
    vector < vector <T> > adjacency_list;
    // for transpose of graph
    vector < vector <T> > transpose_list;

public:
    DG(T _vertices, T _edges){
        vertices = _vertices;
        edges = _edges;
        for (T i = 0; i <= vertices; i++) {
            adjacency_list.push_back({});
            // for transpose of graph
            transpose_list.push_back({});
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
        // adding reverse edge to create transpose of graph
        transpose_list[node].push_back(parent);
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
    // to print transpose graph
    void printTranspose() {
        for (auto node_list : transpose_list) {
            for (auto node : node_list) {
                cout << node << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

public:
    void dfsTopoCall(T node, stack <T> &st, vector <T> &vis) {
        vis[node] = 1;

        for (auto it : adjacency_list[node]) {
            if (vis[it] == 0) {
                dfsTopoCall(it, st, vis);
            }
        }
        st.push(node);
    }

public:
    vector <T> getTopoSort() {
        // not actually a topo sort but the order of finish time
        // when we do a DFS, but the logic is similar, topo sort
        // also gives the order of fininsh time so naming it
        // like that, but it is wrong bcoz Topo sort is not defined
        // for cyclic directed graphs
        vector <T> vis(vertices+1, 0);
        stack <T> st;
        // if 0 based indexing then start from 0 else 1
        for (T i = 0; i < vertices; i++) {
            if (vis[i] == 0) {
                dfsTopoCall(i, st, vis);
            }
        }

        vector <T> topo;
        while (!st.empty()) {
            topo.push_back(st.top());
            st.pop();
        }
        return topo;
    }

public:
    void dfsCall(T node, vector <T> &vis) {
        vis[node] = 1;
        // doing dfs on transpose of graph
        for (auto it : transpose_list[node]) {
            if (vis[it] == 0) {
                dfsCall(it, vis);
            }
        }
        cout << node << " ";
    }

public:
    void getSCC() {
        vector <T> topo = getTopoSort();
        vector <T> vis(vertices+1, 0);

        for (auto i : topo) {
            if ( vis[i] == 0) {
                dfsCall(i, vis);
                cout << endl;
            }
        }
    }

};

void solve(){
    // Creating Directed graph
    int v, e;
    cin >> v >> e;
    DG<int> dg(v,e);
    // creating graph and its transpose simulataneously
    dg.create();
    dg.getSCC();

    // Main logic
}

// Driver code
int main() {
    int t = 0;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
