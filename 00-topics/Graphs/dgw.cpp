#include <bits/stdc++.h>
using namespace std;

template <typename T>
class DGW {
private:
    T vertices;
    T edges;
    vector < vector < pair<T,T> > > adjacency_list;

public:
    DGW(T _vertices, T _edges){
        vertices = _vertices;
        edges = _edges;
        for (T i = 0; i <= vertices; i++) {
            adjacency_list.push_back({});
        }
    }

public:
    void create() {
    for (T i = 0; i < edges; i++) {
        T node1, node2, weight;
        cin >> node1 >> node2 >> weight;
        addAdjacent(node1, node2, weight);
    }
}

public:
    void addAdjacent(T parent, T node, T weight) {
        adjacency_list[parent].push_back({node, weight});
    }

public:
    void print() {
        for (auto node_list : adjacency_list) {
            for (auto node : node_list) {
                cout << node.first << "," << node.second << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
};

void solve(){
    // Creating Directed Weighted Graph
    int v, e;
    cin >> v >> e;
    DGW<int> dgw(v,e);
    dgw.create();
    dgw.print();

    // Main logic

}


int main () {
    int t = 0;
    cin >> t;
    while (t--)
        solve();
    return 0;
}