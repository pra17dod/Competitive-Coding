//https://www.codechef.com/MARCH21C/problems/COLGLF4

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

ll cake(ll &e, ll &h, ll &tl, ll od){
    ll n=0;
    n = (e>h)?h:e;
    e-=n; h-=n;

    if( (tl+n) > od){
        n = od - tl;
        tl = od;        
    }
    else tl += n;
    return n;
}

ll shake(ll &h, ll &tl, ll od){
    ll n=0;
    n = h/3; h%=3;

    if( (tl+n) > od){
        n = od - tl;
        tl = od;        
    }
    else tl += n;
    return n;
}

ll omelete(ll &e, ll &tl, ll od){
    ll n=0;
    n = e/2; e%=2;

    if( (tl+n) > od){
        n = od - tl;
        tl = od;        
    }
    else tl += n;
    return n;
}


void solve(){
    ll n=0, e=0, h=0, a=0, b=0, c=0;
    cin >> n >> e >> h >> a >> b >> c;

    vector <pll> r;
    vector <vec> p = { {1,2,3}, {1,3,2}, {2,1,3},
                       {2,3,1}, {3,1,2}, {3,2,1} }; 
    
    FOR(i,0,6,1){
        ll k = e, m = h;
        ll odr = 0;
        ll pr = 0;
        ll on=0, sn=0, cn=0, tl=0;
        FOR(j,0,3,1){
            if((on+sn+cn)<n){
                if( p[i][j] == 1){
                    on = omelete(k, tl, n); 
                }
                else if ( p[i][j] == 2){
                    sn = shake(m, tl, n);
                }
                else if ( p[i][j] == 3){
                    cn = cake(k, m, tl, n);
                }
            }
        }

        odr = on+sn+cn;
        pr = a*on +b*sn +c*cn;
        if(odr == n){
            r.PB(MP(pr,odr));
        }
    }

    sort(ALL(r));
    ll ans = -1;
    for(auto i: r){
        if(i.S == n){
            ans = i.F;
            break;
        }
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

// 3
// 5 4 4 2 2 2
// 4 5 5 1 2 3
// 4 5 5 3 2 1

// Sample Output

// -1
// 7
// 4
