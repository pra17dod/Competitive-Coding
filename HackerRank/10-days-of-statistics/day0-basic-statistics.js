#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n=0;
    cin >> n;
    double sum=0;
    vector<int> v;
    for (int i=0; i < n; i++){
        int t = 0;
        cin >> t;
        sum += t;
        v.push_back(t);
    }   
    
    sort(v.begin(), v.end());  
    double mean = sum/n;
    
    int mode = 0;
    map < int, int> d;
    for( auto a : v){
        d[a]++;
    }
    
    for ( auto a: d){
        if( a.second > d[mode]){
            mode = a.first;
        }
    }
    
    double median =-1;
    if ( n%2==0){
        median = float((v[n/2] + v[(n/2)-1]))/2;
    }
    else 
        median = v[n/2];
    
    cout << mean << endl;
    cout << median << endl;
    cout << mode << endl;   
    
    
    return 0;
}

