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

ll cake(ll &e, ll &h){
    ll n=0;
    n = (e>h)?h:e;
    e-=n; h-=n;
    return n;
}

ll shake(ll &h){
    ll n=0;
    n = h/3;
    h%=3;
    return n;
}

ll omelete(ll &e){
    ll n=0;
    n = e/2;
    e%=2;
    return n;
}

ll modify(ll &p1, ll &p2, ll &p3 , ll n){
    while( (p1+p2+p3) > n){
        if(p3){
            p3--;
        }
        else if(p2){
            p2--;
        }
        else if(p1){
            p1--;
        }
    }
    return (p1+p2+p3);
}

void solve(){
    ll n=0, e=0, h=0, a=0, b=0, c=0;
    cin >> n >> e >> h >> a >> b >> c;
    ll order = 0;
    ll price = 0;
    //case a : a<=b<=c
    if( a<=b && a<c && b<=c){
        //PE("1");
        ll on=0,sn=0,cn=0;
        on = omelete(e);
        sn = shake(h);
        cn = cake(e, h);

        order = modify( on, sn, cn, n);
        price = a*on + b*sn + c*cn;
    }
    //case b : a<=c<=b
    else if( a<=c && a <b && c<=b){
        //PE("2");
        ll on=0,sn=0,cn=0;
        on = omelete(e);
        cn = cake(e, h);
        sn = shake(h);

        order = modify( on, cn, sn, n);
        price = a*on + b*sn + c*cn;
    }
    //case c : b<=a<=c
    else if( b<=a && b <c && a<=c){
        //PE("3");
        ll on=0,sn=0,cn=0;
        sn = shake(h);
        on = omelete(e);
        cn = cake(e, h);

        order = modify( sn, on, cn, n);
        price = a*on + b*sn + c*cn;
    }
    //case d:  b<=c<=a
    else if( b<=c && b < a && c<=a){
        //PE("4");
        ll on=0,sn=0,cn=0;
        if(b==c){
            cn = cake(e, h);
            sn = shake(h);        
        }else{
            sn = shake(h);
            cn = cake(e, h);
        }
        on = omelete(e);

        order = modify( sn, cn, on, n);
        price = a*on + b*sn + c*cn;
    }
    //case e:  c<=a<=b
    else if( c<=a && c < b && a<=b){
        //PE("5");
        ll on=0,sn=0,cn=0;
        cn = cake(e, h);
        on = omelete(e);
        sn = shake(h);

        order = modify( cn, on, sn, n);
        price = a*on + b*sn + c*cn;
    }
    //case f : c<=b<=a
    else if( c<=b && c < a && b<=a){
        //PE("6");
        ll on=0,sn=0,cn=0;
        cn = cake(e, h);
        sn = shake(h);
        on = omelete(e);

        order = modify( cn, sn, on, n);
        price = a*on + b*sn + c*cn;
    }
    //case g : a=b=c
    else if( a==b && b==c && c==a){
        //PE("7");
        ll on=0,sn=0,cn=0;
        cn = cake(e, h);
        on = omelete(e);
        sn = shake(h);        

        order = modify( on, sn, cn, n);
        price = a*on + b*sn + c*cn;
    }

    if(order==n){
        PE(price);
    }
    else PE(-1);
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
// 5 4 4 2 2 2
// 4 5 5 1 2 3
// 4 5 5 3 2 1

// Sample Output

// -1
// 7
// 4

// Total cases of the prices of a b c 
// 13
// 1 2 3
// 2 3 1
// 3 1 2
// 3 2 1
// 2 1 3
// 1 3 2
// 1 1 1
// 1 2 2
// 2 2 1
// 2 1 2
// 1 1 2
// 1 2 1
// 2 1 1







// 1
// 5
// 4
// 6
// 3
// 2
// 7
// 1
// 5
// 3
// 1
// 2
// 4