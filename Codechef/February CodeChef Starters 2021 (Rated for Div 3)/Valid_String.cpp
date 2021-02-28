//https://www.codechef.com/START1C/problems/VSTRING

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
    ll n=0, c=0;
    cin >> n >> c;
    string s;
    cin >> s;
    vec one;
    FOR(i,0,n,1) {if( s[i] == '1') one.PB(i);}    
    ll cnt = 0;
    FOR(i,0,one.size()-1,1) {if( (one[i+1]- one[i] - 1) > c)cnt++;}    
    if(!one.empty() && ((n-1) - one.back() + one[0] > c) ) cnt++;
    (cnt > 1)? PE("NO"): PE("YES");
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

// 3
// 4 1
// 1100
// 4 0
// 0101
// 6 1
// 101001

// Sample Output

// YES
// NO
// YES