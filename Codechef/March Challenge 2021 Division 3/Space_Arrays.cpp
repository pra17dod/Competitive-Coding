//https://www.codechef.com/MARCH21C/problems/SPACEARR

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
    string ans = "Second";
    ll sum = 0;
    FOR(i,1,n+1,1){
        if(i< v[i-1]){
            sum =0;
            break;
        }
        else sum += (i - v[i-1]);

    }

    if( sum%2!=0){
        ans = "First";
    }

    PE(ans);
    

}

int main(){
    FAST;
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    
    ll t=0;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}


// Sample Input
// 4
// 4
// 1 2 3 3
// 4
// 1 1 3 3
// 5
// 1 2 2 1 5
// 3
// 2 2 3

// Sample Output
// First
// Second
// Second
// Second
