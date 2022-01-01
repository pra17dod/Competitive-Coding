#include <bits/stdc++.h>
using namespace std;


// Bellman Ford Algorithm to find the shortest distance in directed and
// undirected graph having negative edge. Not applicable when negative
// cycle present. Also, can check for negative cycle in graph.
// Shortest path doesn't make sense for negative cycles too.

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

public:
    void shortestPath (T source) {
        vector <T> dis(vertices, 100000);
        dis[source] = 0;
        for (T i = 0; i < vertices -1; i++) {
            for (T j = 0; j < vertices; j++) {
                for (T k = 0; k < adjacency_list[j].size(); k++) {
                    if (dis[adjacency_list[j][k].first] >
                            dis[j] + adjacency_list[j][k].second) {
                                dis[adjacency_list[j][k].first] =
                                    dis[j] + adjacency_list[j][k].second;
                    }
                }
            }
        }

        for (auto i : dis) {
            cout << i << " ";
        }
        cout << endl;

    }
};

void solve(){
    // Creating Directed Weighted Graph
    int v, e, s;
    cin >> v >> e >> s;
    DGW<int> dgw(v,e);
    dgw.create();
    dgw.shortestPath(s);

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