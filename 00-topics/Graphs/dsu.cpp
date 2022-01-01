#include <bits/stdc++.h>
using namespace std;

template <typename T>
class DSU {
private:
    vector <T> parent, size, rank;

public:
    DSU(T n){
        // can be used for 0 or 1 base indexing
        for (T i = 0; i <= n; i++) {
            parent.push_back(i);
            size.push_back(1);
            rank.push_back(1);
        }
    }

public:
    T findPar(T node) {
        if (parent[node] == node)
            return node;
        // path-compression done here
        else
            parent[node] = findPar(parent[node]);
    }

public:
    // time complexity: 4 x alpha
    void unionBySize(T node1, T node2){
        T par_n1 = findPar(node1);
        T par_n2 = findPar(node2);

        if (par_n1 == par_n2)
            return;

        if (size[par_n1] < size[par_n2]) {
            parent[par_n1] = par_n2;
            size[par_n2] += size[par_n1];
        }
        else {
            parent[par_n2] = par_n1;
            size[par_n1] += size[par_n2];
        }
    }

public:
    // time complexity: 4 x alpha
    void unionByRank(T node1, T node2){
        T par_n1 = findPar(node1);
        T par_n2 = findPar(node2);

        if (par_n1 == par_n2)
            return;

        if (rank[par_n1] == rank[par_n2]) {
            parent[par_n1] = par_n2;
            rank[par_n2]++;
        }
        else if (rank[par_n1] < rank[par_n2])
            parent[par_n1] = par_n2;
        else
            parent[par_n2] = par_n1;
    }

public:
    // print parent of all nodes
    void printPar() {
        for (T i : parent)
            cout << i << " ";
        cout << endl;
    }
};


int main () {
    DSU<int> d(5);
    d.printPar();
    cout << "All Okay!" << endl;
    return 0;
}