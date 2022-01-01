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

public:
    void bfsCall(T source, vector <T> &dis) {
        priority_queue <pair <T,T> > q;
        q.push({0,source});
        dis[source] = 0;

        while (!q.empty()) {
            T node = q.top().second;
            q.pop();

            for (auto it : adjacency_list[node]) {
                if (dis[it.first] > it.second + dis[node]) {
                    dis[it.first] = it.second + dis[node];
                }
                q.push({dis[it.first], it.first});
            }
        }

    }

public:
    void bfs(T source) {
        vector <T> dis(vertices, INT_MAX);
        bfsCall(source, dis);
        for (auto i : dis) {
            if (i == INT_MAX)
                cout << "INF" << " ";
            else
                cout << i << " ";
        }
        cout << endl;
    }

};

void solve(){
    // Creating Directed Weighted graph
    int v, e, s;
    cin >> v >> e >> s;
    DGW<int> dgw(v,e);
    dgw.create();

    // Main logic
    dgw.bfs(s);
}


int main () {
    int t = 0;
    cin >> t;
    while (t--)
        solve();
    return 0;
}