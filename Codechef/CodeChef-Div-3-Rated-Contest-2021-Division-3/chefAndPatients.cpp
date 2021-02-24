//https://www.codechef.com/CCRC21C/problems/CHEFPAT

#include <bits/stdc++.h>
#define fast  ios_base::sync_with_stdio(false); cin.tie(NULL);
#define mp    make_pair
#define pb    push_back
#define eb    emplace_back
#define f     first
#define s     second
#define ll    long long
#define pr(j) cout << j << endl 
#define pf(j) cout << j << " " 
using namespace std;

bool sortasecbyidx(const pair <ll, pair <ll, ll>> &a, 
          const pair <ll, pair <ll, ll>> &b) 
{ 
    return ( a.s.f < b.s.f); 
} 

bool sortasecbyvalue(const pair <ll, pair <ll, ll>> &a, 
          const pair <ll, pair <ll, ll>> &b) 
{ 
    if (a.f == b.f){
    	return a.s.f > b.s.f;
    }
    else 
    	return ( a.f < b.f ); 
} 

void solve(){
	ll n=0;
	cin >> n;
	vector <pair <ll, pair <ll, ll>> > p;
	vector <ll> c; 
	for( ll i=0; i < n; i++){
			ll t=0;
			cin >> t;
			p.pb( mp(t, mp(i,0) ) );
			c.pb(t);	
	}
	
	sort(p.begin(), p.end(), sortasecbyvalue);

	ll cnt=n;
	for( ll i=0; i < n; i++){
		p[i].s.s = cnt;
		cnt--;
	}

	sort(p.begin(), p.end(), sortasecbyidx);

	for( ll i=0; i < n; i++){
		pf(p[i].s.s);
	}	
	cout << endl;
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

// 4
// 5
// 2 3 5 3 4
// 3
// 2 2 2
// 6
// 2 10 3 3 2 10
// 4
// 8 9 8 9

// Sample Output:

// 5 3 1 4 2
// 1 2 3
// 5 1 3 4 6 2
// 3 1 4 2
