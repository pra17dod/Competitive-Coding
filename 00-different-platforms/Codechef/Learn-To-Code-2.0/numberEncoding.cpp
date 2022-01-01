//https://www.codechef.com/LTC22021/problems/LTC07

#include <bits/stdc++.h>
using namespace std;

typedef long long int       ll; 
typedef vector < ll >       vec; 
typedef pair < ll, ll >     p; 

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
#define SORT(v)             sort(v.begin(), v.end())
#define FOR(a, c)           for (ll (a) = 0; (a) < (c); (a)++) 
#define FORL(a, b, c)       for (ll (a) = (b); (a) <= (c); (a)++) 
#define FORR(a, b, c)       for (ll (a) = (b); (a) >= (c); (a)--) 
#define FAST                ios_base::sync_with_stdio(false); cin.tie(NULL)

void solve(){
    
    map < char , int> v;
    v['0'] = 3;
    v['1'] = 3;
    v['2'] = 3;
    v['3'] = 3;
    v['4'] = 3;
    v['5'] = 3;
    v['6'] = 2;
    v['7'] = 2;
    v['8'] = 2;
    v['9'] = 2;
    
    string n;
    cin >> n;

    ll sum=1;
    for (auto i:n){
        sum *= (v[i]);
    }

    PE(sum);

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

// Sample Input:

// 1
// 5432101234
// Sample Output:

// 59049 