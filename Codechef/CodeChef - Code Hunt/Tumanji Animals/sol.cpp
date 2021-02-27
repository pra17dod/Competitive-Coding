//https://www.codechef.com/CHNT2021/problems/CDHNT5

#include <bits/stdc++.h>
using namespace std;

typedef long long int       ll;
typedef vector < ll >       vec;
typedef pair < ll, ll >     pll;

#define P                   pair
#define F                   first
#define S                   second 
#define PB                  push_back 
#define POB                 pop_back 
#define EB                  emplace_back
#define MP                  make_pair
#define MOD                 1e9 + 7 
#define INF                 1000000000000000003 
#define PE(a)               cout << (a) << endl 
#define PS(a)               cout << (a) << " " 
#define MAX(a, b)           ((a) < (b) ? (b) : (a)) //MIN(3,i++) fail case
#define MIN(a, b)           ((a) > (b) ? (b) : (a)) //MAX(3,i++) fail case
#define ALL(v)              (v).begin(), (v).end()
#define FOR(a, b, c, s)     for (ll (a) = (b); (a) < (c); (a)+=s)
#define FORL(a, b, c, s)    for (ll (a) = (b); (a) <= (c); (a)+=s)
#define FORR(a, b, c, s)    for (ll (a) = (b); (a) >= (c); (a)-=s)
#define FAST                ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void solve(){
    ll n=0;
    cin >> n;

    map <ll, ll> v;
    FOR(i,0,n,1){
        ll temp=0;
        cin >> temp;
        v[temp]++;
    }         
    ll ans= INF, max= -INF;
    for( auto i:v){
        if(i.S > max){
            max = i.S;
            ans = i.F;
        }
    }

    PE(ans);

}

int main(){
    FAST;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    // ll t=0;
    // cin >> t;
    // while (t--){
    //     solve();
    // }
    solve();

    return 0;
}


// Sample Input

// 6
// 1 1 2 1 3 2

// Sample Output

// 1 
