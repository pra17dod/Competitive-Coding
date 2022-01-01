#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t =0;
    cin >> t;
    while(t--){
    string s1, s2;
    cin >> s1;
    for ( int i=0; i<s1.length(); i++){
        if ( i%2==0 ){
            cout << s1[i];
        }
        else {
            s2 += s1[i];
        }
    }
    cout << " " << s2 << endl;
    }
    return 0;
}

