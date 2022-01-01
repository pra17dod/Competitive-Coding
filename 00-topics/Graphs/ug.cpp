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

};

void solve(){
    // Creating Undirected graph
    int v, e;
    cin >> v >> e;
    UG<int> ug(v,e);
    ug.create();

    // Main logic
}

// Driver function
int main () {
    int t = 0;
    cin >> t;
    while (t--)
        solve();
    return 0;
}