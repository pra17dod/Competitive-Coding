//https://www.codechef.com/START1C/problems/ADMIT

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

class Stud {
    public:
    ll rank, id;
    vec list; 
};

class Clg {
    public:
    ll rank,id;
    bool avail = true;
};

bool studRank( Stud const &a, Stud const &b){
    return (a.rank < b.rank);
}

bool clgRank( Clg const &a, Clg const &b){
    return (a.rank < b.rank);
}


void solve(){
    ll n=0,m=0;
    cin >> n >> m;
    ll i=0;

    vector <ll> clg;
    vector <bool> clgAvail(n, true);
    FOR(i,0,n,1){
        ll t=0;
        cin >> t;
        clg.PB(t);
    }

    Stud s[m];
    while(i < m){
        s[i].id = i;
        cin >> s[i].rank; 
        i++;
    }
    sort(s, s+m, studRank);

    i=0;
    while(i<m){
        ll p=0;
        cin >> p;
        while(p--){
            ll temp=0;
            cin >> temp;
            s[i].list.PB(temp);
        }  
        i++;    
    }
    ll ans = 0;
    FOR(i,0,m,1){
        ll maxr = 0,flag=0;
        FOR(j,0,s[i].list.size(),1){    
            ll pos = s[i].list[j]-1;
            ll df = clg[pos];
            if( clg[maxr] >= clg[pos] && clgAvail[pos]){
                maxr = pos;
                flag = 1;

            }
        }
        if( flag ) {
            clgAvail[maxr] = false;
            maxr++;
        }
        if(s[i].id == 0){
            ans = maxr;
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