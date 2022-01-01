//https://www.codechef.com/problems/CCBTS03

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define mp  make_pair
#define pb  push_back
#define eb  emplace_back
#define f   first
#define s   second
typedef int long long ll;
using namespace std;

void solve(){
	ll n=0, k=0;
	cin >> n >> k;
	vector<ll> v;
	for( int i=0; i <n; i++){
		ll temp =0;
		cin >> temp;
		v.pb(temp);				
	}
	sort( v.begin(), v.end());

	ll min = v[k-1]-v[0];
	for( ll i=1; i <n-k; i++){
		if( (v[i+k-1]-v[i]) < min){
			min = v[i+k-1] - v[i];
		}
	}
	cout << min << endl;

}

int main(){
	fast;
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ll t =0;
    cin >> t;
    while (t--){
    	solve();
    }
    return 0;
}

// Sample 

// Input
// 3
// 4 1
// 3 4 2 5
// 5 2
// 1 5 3 7 9
// 6 3
// 1 12 7 9 5 17

// Output
// 0
// 2
// 4



