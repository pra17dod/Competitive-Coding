//https://www.codechef.com/problems/SALARY

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
typedef long long int ll;
using namespace std;

int main(){
    fast;
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ll t=0;
    cin >> t;
    while (t--){
	    int n=0;
	    cin >> n;

	   	int min = 10001;
	   	int sum = 0;
	 
		for(ll i=0; i < n; i++){
			ll s = 0;
			cin >> s;
			sum += s;
			if( min > s){
				min = s;
			}
		}

		ll step = sum - (n*min);

		cout << step <<endl;
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
