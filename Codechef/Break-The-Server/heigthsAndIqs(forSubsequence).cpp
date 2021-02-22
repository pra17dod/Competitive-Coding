//https://www.codechef.com/CCHI2021/problems/CCBTS04

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define mp  make_pair
#define pb  push_back
#define eb  emplace_back
#define f   first
#define s   second
#define ll  long long
using namespace std;

void solve(){

	ll n=0;
	cin >> n;
	vector <ll> h;
	for( ll i=0; i < n; i++){
			ll t=0;
			cin >> t;
			h.pb(t);
	}

	vector <ll> iq;	
	for( ll i=0; i < n; i++){
			ll t=0;
			cin >> t;
			iq.pb(t);	
	}

	ll res=1;
	vector <ll> s(n,1);

	for(ll i=1; i < n; i++){
		for( ll j=0; j < i; j++){
			if( h[j] < h[i] && iq[j] > iq[i]){
				if( s[i] <= s[j]){
					s[i] = 1+s[j];
				}
			}
		}
		res = max( res, s[i]);
	}
	cout << res << endl;
}

int main(){
	fast;
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ll t=0;
    cin >> t;
    while (t--){
    	solve();
    }
    return 0;
}


// Sample Input

// 2
// 3
// 1 2 3
// 3 2 1
// 4
// 1 3 2 4
// 5 6 4 4

// Sample Output

// 3
// 2
