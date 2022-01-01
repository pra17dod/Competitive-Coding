// Link to problem:
// https://www.hackerrank.com/challenges/kittys-calculations-on-a-tree/problem

#include <bits/stdc++.h>
using namespace std;

#define INF 1000000007LL

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
    T minDis (T u, T v, map <pair<int, int>, int> &d) {
        // checking if already such pair's distance
        // calculated and stored
        if (d.count({u,v}) != 0)
            return d[{u,v}];

        priority_queue <T, vector<T>, greater<T>> q;
        vector <T> dis(vertices+1, INT_MAX);
        dis[u] = 0;
        q.push(u);
        // bfs implementation starting from source
        while (!q.empty()) {
            T node = q.top();
            q.pop();
            for (auto it : adjacency_list[node]) {
                // if end found update map and return dis of v
                if (it == v and dis[v] > dis[node] + 1) {
                    dis[v] = dis[node] + 1;
                    d[{u,v}] = dis[v];
                    d[{v,u}] = dis[v];
                    return dis[v];
                }
                // else update other's distances and pushing to queue
                // if updated
                else {
                    if (dis[it] > dis[node] + 1) {
                        q.push(it);
                        dis[it] = dis[node] + 1;
                        d[{u,it}] = dis[it];
                        d[{it,u}] = dis[it];
                    }
                }
            }

        }
        return dis[v];
    }

};


int main () {
    // Creating Undirected graph
    // INPUT LOGIC
    int v, q;
    cin >> v >> q;
    UG<int> ug(v,v-1);
    map <pair<int, int>, int> d;
    ug.create();
    while (q--){
        int n = 0;
        cin >> n;
        vector <int> query;
        for (int i = 0; i < n; i++) {
            int t = 0;
            cin >> t;
            query.push_back(t);
        }
        // calling minDis for all possible pair in query vector
        long long sum = 0;
        for (int i = 0; i < query.size()-1; i++) {
            for (int j = i+1; j < query.size(); j++) {
                sum += (query[i]*query[j]*ug.minDis(query[i],query[j], d))%INF;
            }
        }
        cout << sum%INF << endl;
    }
    return 0;
}


// Sample
// Input
// 7 3
// 1 2
// 1 3
// 1 4
// 3 5
// 3 6
// 3 7
// 2
// 2 4
// 1
// 5
// 3
// 2 4 5

// Output
// 16
// 0
// 106