//https://www.codechef.com/CCRC21C/problems/TOTSCR

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
	ll n=0,k=0;
	cin >> n >> k;
	vector <ll> vk;
		for( ll i=0; i < k; i++){
				ll t=0;
				cin >> t;
				vk.pb(t);	
		}	

	for( ll i=0; i < n; i++){
		string s = "";
		ll sum=0;
		cin >> s;
		for (ll i=0; i < s.length(); i++){
			if( s[i]=='1'){
			sum += vk[i];
			}
		}
		cout << sum << endl;
	}
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


// Sample Input:

// 3
// 2 2
// 1 2
// 01
// 10
// 2 2
// 1 2
// 11
// 00
// 2 1
// 100
// 0
// 1

// Sample Output:

// 2
// 1
// 3
// 0
// 0
// 100

