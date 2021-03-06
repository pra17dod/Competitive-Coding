//https://codeforces.com/contest/1493/problem/D

#include <bits/stdc++.h>
#include <numeric>
using namespace std;

typedef long long int          ll;
typedef vector<ll>             vec;
typedef pair<ll,ll >           pll;
typedef vector<ll>::iterator   itr;

#define P                      pair
#define F                      first
#define S                      second 
#define PB                     push_back 
#define POB                    pop_back 
#define EB                     emplace_back
#define MP                     make_pair
#define MOD                    1e9 + 7 
#define INF                    1000000000000000003 
#define PE(a)                  cout << (a) << endl 
#define PS(a)                  cout << (a) << " " 
#define MAX(a, b)              ((a) < (b) ? (b) : (a)) //MIN(3,i++) fail case
#define MIN(a, b)              ((a) > (b) ? (b) : (a)) //MAX(3,i++) fail case
#define ALL(v)                 (v).begin(), (v).end()
#define FOR(a, b, c, s)        for (ll (a) = (b); (a) < (c); (a)+=s)
#define FORL(a, b, c, s)       for (ll (a) = (b); (a) <= (c); (a)+=s)
#define FORR(a, b, c, s)       for (ll (a) = (b); (a) >= (c); (a)-=s)
#define FAST                   ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

ll computegcd(ll a, ll b){
	if(b == 0){
	    return a;
	}
	else{
		return computegcd(b, a % b);
	}
}

void solve(){
    ll q=0,n=0;
    cin >> n >>q;
    vector <ll> a;
    FOR(i,0,n,1){
        ll t=0;
        cin >> t;
        a.PB(t);
    }
    vec pos;
    ll gcd;

    FOR(i,0,q,1){
        ll k=0,l=0;
        cin >> k >> l;
        a[k-1] = ((a[k-1]%ll(MOD))*l);
        ll gcd_r = a[0];
        FOR(j,0,a.size(),1){
            gcd_r = computegcd(gcd_r, a[j]);
        }
        PE(gcd_r);
    }
}

int main(){
    FAST;
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    
    // ll t=0;
    // cin >> t;
    // while (t--){
    //     solve();
    // }

    solve();
    return 0;
}


// Sample Input
// 4 3
// 1 6 8 12
// 1 12
// 2 3
// 3 3

// Sample Output
// 2
// 2
// 6
