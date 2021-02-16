//https://www.codechef.com/problems/SALARY

#include <iostream>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
typedef long long int ll;
using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ll t=0;
    cin >> t;
    while (t--){
	    ll n=0;
	    cin >> n;

	   	ll ar[n];
	   	ll min = 10000;
	 
		for(ll i=0; i < n; i++){
			cin >> ar[i];
			if( min > ar[i]){
				min = ar[i];
			}
		}

		ll diff=0;

		for(ll i=0; i < n; i++){
			diff +=  ar[i] - min;
		}
		
		cout << diff <<endl;
	}
	return 0;
}



// Sample

// Input
// 2
// 3
// 1 2 3
// 2
// 42 42

// Output
// 3
// 0
