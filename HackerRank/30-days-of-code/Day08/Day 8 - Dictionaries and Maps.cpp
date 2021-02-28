#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    map < string, string > phoneBook;
    int t=0;
    cin >> t;
    while(t--){
        string s1, s2;
        cin >> s1 >> s2;
        phoneBook[s1]=s2;
    } 
    
    string q;
    while(cin>>q){
        
        if(phoneBook[q]==""){
            cout << "Not found" << endl; 
        }
        else 
            cout << q << "=" << phoneBook[q] << endl;
    }
    return 0;
}
