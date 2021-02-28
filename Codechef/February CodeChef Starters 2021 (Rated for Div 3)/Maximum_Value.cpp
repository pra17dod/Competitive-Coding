//https://www.codechef.com/START1C/problems/MVALUE

#include <bits/stdc++.h>
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

ll func(ll &a, ll &b){
    return (a*b + abs(a-b));
}

void solve(){
    ll n=0;
    cin >> n;
    vector <ll> v;
    FOR(i,0,n,1){
        ll t=0;
        cin >> t;
        v.PB(t);
    }
    
    sort(ALL(v));
    ll a = v.size()-1;
    ll s1 =0, s2=0;
    s1 = func( v[0], v[1]);
    s2 = func( v[a], v[a-1]);

    if( s1>s2){
        PE(s1);
    }
    else PE(s2);

    

}

int main(){
    FAST;
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
// 2   
// 2 2
// 3
// 5 3 2

// Sample Output

// 4
// 17