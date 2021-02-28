//https://www.codechef.com/START1C/problems/COUPON2

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
    ll c=0, d=0;
    cin >> d >> c;

    ll sum1 =0, sum2=0;
    FOR(i,0,3,1) {
        ll t=0;
        cin >> t;
        sum1 += t;
    }

    FOR(i,0,3,1) {
        ll t=0;
        cin >> t;
        sum2 += t;
    }
    
    ll total =c;
    if(sum1 < 150) total+= d;
    if(sum2 < 150) total+= d;
    
    if(total < 2*d){
        PE("YES");
    }
    else PE("NO");

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
// 90 100
// 100 50 10
// 80 80 80
// 30 30
// 100 100 100
// 10 20 30

// Sample Output

// YES
// NO