//https://www.codechef.com/problems/CHN15A

#include <iostream>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
typedef long long int ll;
using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t=0;
    cin >> t;
    while (t--){
	    int n=0, k=0;
	    cin >> n >> k;

	    int count=0;
	   	for(int i=0; i < n; i++){
			int p=0;
			cin >> p;
			if ( (p+k)%7==0 ){
				count++;
			}			
		}
		
		cout << count <<endl;
		
	}
	return 0;
}



// Sample

// Input
// 1
// 5 10
// 2 4 1 35 1

// Output
// 1

