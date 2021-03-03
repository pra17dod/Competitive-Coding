#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    vector <int> k;
    while(n > 0){
        int t=0;
        t = n%2;
        k.push_back(t);
        n/=2;
    }
        
    // reverse(k.begin(), k.end());  
    
    int max=0,cnt=0;
    
    vector <int> pos;
    for(int j=0; j< k.size(); j++){
        if(k[j]==1){
            cnt++;
            if(cnt > max){
                max = cnt;
            }
        }
        else cnt=0;
    } 
    
    cout << max << endl;
    
    return 0;
}
