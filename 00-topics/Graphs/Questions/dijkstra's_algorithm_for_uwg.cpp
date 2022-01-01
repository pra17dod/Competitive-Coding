#include <bits/stdc++.h>
using namespace std;

template <typename T>
class UGW {
private:
    T vertices;
    T edges;
    vector < vector <pair<T,T> > > adjacency_list;

public:
    UGW(T _vertices, T _edges){
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
        adjacency_list[node].push_back({parent, weight});
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
    void shortestDis(T source) {
        vector <T> dis(vertices+1, INT_MAX);
        priority_queue <pair <T,T>, vector <pair <T,T>>, greater <pair<T,T>> > q;
        dis[source] = 0;
        q.push({0, source});

        while (!q.empty()) {
            T node = q.top().second;
            q.pop();

            for (auto it : adjacency_list[node]) {
                if (dis[it.first] > it.second + dis[node]) {
                    dis[it.first] = it.second + dis[node];
                    q.push({dis[it.first], it.first});
                }
            }
        }

        // 1 based indexing so starting i from 1
        for (T i = 1; i <= vertices; i++)
            cout << dis[i] << " ";
        cout << endl;
    }

};

void solve() {
    // Create Undirected Weighted graph
    int v, e, s;
    cin >> v >> e >> s;
    UGW<int> ugw(v,e);
    ugw.create();
    ugw.shortestDis(s);

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