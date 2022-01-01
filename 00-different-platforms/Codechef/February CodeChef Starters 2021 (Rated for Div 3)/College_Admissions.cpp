//https://www.codechef.com/START1C/problems/ADMIT

#include <bits/stdc++.h>
using namespace std;

typedef long long int          ll;
typedef vector<ll>             vec;
typedef pair<ll,ll>            pll;
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

bool sortRank( const pll &a, const pll &b ){
    return a.S < b.S;
}

void solve(){
    ll n=0,m=0;
    cin >> n >> m;
    
    vector <pll> clg;
    FOR(i,0,n,1){
        ll te=0;
        cin >> te;
        clg.PB(MP(i+1,te));
    }

    vector <pll> stud;
    FOR(i,0,m,1){
        ll te=0;
        cin >> te;
        stud.PB(MP(i+1,te));
    }

    vector < vector <pll> > list;

    FOR(i,0,m,1){
        ll k = 0;
        cin >> k;
        vector <pll> v;
        FOR(i,0,k,1){
            ll te=0;
            cin >> te;
            v.PB(MP(te,clg[te-1].S));
        }
        sort(ALL(v),sortRank);
        list.PB(v);
    }

    sort(ALL(stud),sortRank);
    sort(ALL(clg),sortRank);

    vector <bool> clgAvail(n,true);
    ll ans=0;
    FOR(i,0,m,1){
        ll maxr = INF, pos=-1,got=0;
        for(auto c: list[stud[i].F-1]){
            if( clgAvail[c.F-1]== true && maxr > c.S){
                maxr = min( maxr, c.S);
                pos = (c.F-1);
                got = 1;
            }
        }
        if(got){
            clgAvail[pos] = false;
            
        }
        if(stud[i].F==1 && got){
            ans = pos+1;
            break;            
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
    
    ll t=0;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}


// Sample Input

// 3
// 2 2
// 2 1
// 1 2
// 2 1 2
// 2 1 2
// 1 2
// 1
// 2 1
// 1 1
// 1 1
// 2 1
// 1 2
// 1
// 2 2 1

// Sample Output

// 2
// 0
// 1