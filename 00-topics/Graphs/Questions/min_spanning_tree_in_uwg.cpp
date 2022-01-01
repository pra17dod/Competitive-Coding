#include <bits/stdc++.h>
using namespace std;

template <typename T>
class MSTU {
private:
    T vertices;
    T edges;
    vector < vector < pair <T, T> > > adjacency_list;
    priority_queue <
            pair <T, pair <T, T>>,
            vector < pair <T,pair<T, T>>>,
            greater < pair <T,pair<T, T>>>
        > list;
    // { weight, node1 , node2 }

public:
    MSTU(T _v, T _e){
        vertices = _v;
        edges = _e;
        for (T i = 0; i <= vertices; i++) {
            adjacency_list.push_back({});
        }
    }

public:
    void addEdge (T node1, T node2, T weight) {
        list.push({weight, {node1, node2}});
    }

public:
    void createList () {
        for (T i = 0; i < edges; i++) {
            T n1, n2, weight;
            cin >> n1 >> n2 >> weight;
            addEdge(n1, n2, weight);
        }
    }

public:
    void getMST () {
        createList();
        // for 0 and 1 based indexing
        vector <T> vis(vertices+1, 0);
        while (!list.empty()) {
            T w1 = list.top().first;
            T n1 = list.top().second.first;
            T n2 = list.top().second.second;
            list.pop();
            if (vis[n1] == 0 or vis[n2] == 0) {
                adjacency_list[n1].push_back({n2, w1});
                adjacency_list[n2].push_back({n1, w1});
                vis[n1] = 1;
                vis[n2] = 1;
            }
        }
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

void solve() {
    // Create MST in Undirected Weighted graph
    int v, e;
    cin >> v >> e;
    MSTU<int> mstu(v,e);
    mstu.getMST();
    mstu.print();

    // Main logic
}

int main () {
    int t = 0;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
