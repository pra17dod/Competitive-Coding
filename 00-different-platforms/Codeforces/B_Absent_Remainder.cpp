//https://codeforces.com/contest/1613/problem/B

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
    int mun = INT_MAX;
    vector <int> num;
    while(n--) {
        int t; cin >> t;
        num.push_back(t);
        mun = min(mun, t);
    }
    int cnt = 0;
    int i = 0;
    while (cnt < num.size()/2) {
        if ( num[i] != mun) {
            cout << num[i] << " " << mun << endl;
            cnt++;
        }
        i++;
    }
}

int main(){
    FAST;
    ll t=0;
    cin >> t;
    while (t--){
        solve();
    }
    //solve();
    return 0;
}


// Sample Input


// Sample Output

