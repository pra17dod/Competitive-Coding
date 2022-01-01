//https://www.codechef.com/LTC22021/problems/LTC06

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
    ll n=0;
    cin >> n;
    vector <ll> a;
    a.PB(1); a.PB(1); a.PB(1);
    int flag=1;
    ll i = 3;
    

    ll ans = 0;
    if( n <= 4){
        ans = n;
        flag = 0;
    }
    while(flag){
        a[i] = a[i-1] + a[i-3];
        if( i == (n+1)){
            ans = a[i];
            flag =0;
        }
        i++;
    }      
    PE(ans);
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

// 3
// 4
// 8
// 9 

// Sample Output:

// 4
// 19
// 28 