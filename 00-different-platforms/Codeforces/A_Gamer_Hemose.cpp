//https://codeforces.com/contest/1592/problem/0

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
    ll n=0, m=0;
    cin >> n >> m;

    ll m1 = -INT_MAX;
    ll m2 = -INT_MAX;

    FOR(i, 0, n, 1) {
        ll t = 0;
        cin >> t ;
        if (t >= m1) {
            m2 = m1;
            m1 = t;
        }
        else if ( t > m2) {
            m2 = t;
        }
    }

    ll cnt = 2 * (m / (m1 + m2));
    m = m % (m1 + m2);

    if (m > m1) {
        cnt += 2;
    }
    else if (m <= m1 and m > 0) cnt++;
    cout << cnt <<  endl;
    

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
// 3
// 2 4
// 3 7
// 2 6
// 4 2
// 3 11
// 2 1 7

// Sample Output
// 1
// 2
// 3
