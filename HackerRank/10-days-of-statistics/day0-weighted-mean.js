#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n=0;
    cin >> n;
    vector<int> x;
    for(int i=0; i < n; i++){
        int t=0;
        cin >> t;
        x.push_back(t);
    }  
    
    int sw=0;
    vector<int> w;
    for(int i=0; i < n; i++){
        int t=0;
        cin >> t;
        w.push_back(t);
        sw += t;
    }  
    
    double sum=0;
    for(int i=0; i < n; i++){
        sum += x[i]*w[i];
    }  
    
    double res = sum/sw;
    
    cout << setprecision(1) << fixed << res << endl;
    return 0;
}

