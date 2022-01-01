//https://www.codechef.com/problems/LECANDY

#include <bits/stdc++.h>
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
	    ll n=0, c=0;
	    cin >> n >> c;	
		ll j=0, sum=0;
		for(ll i=0; i < n; i++){
			cin >> j;
			c -= j;
		}
		if( c >= 0 ){
			cout << "Yes" <<endl;
		}
		else 
			cout << "No" << endl;
	}
}


// Sample 

// Input
// 2
// 2 3
// 1 1
// 3 7
// 4 2 2

// Output
// Yes
// No
