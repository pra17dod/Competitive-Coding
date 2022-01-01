//https://www.codechef.com/LTC22021/problems/LTC05

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
    
    string s1, s2, s3;
    cin.ignore();
    cin >> s1;
    cin.ignore();
    cin >> s2;
    cin.ignore();
    cin >> s3;
    
    map <char, char> ss1, ss2, ss3;

    for ( auto i: s1){
    	ss1[i]++;
    }
    for ( auto i: s2){
    	ss2[i]++;
    }
    for ( auto i: s3){
    	ss3[i]++;
    }
   	
   	if( ss1 == ss2 && ss1 == ss3){
   		PE( "Possible");
   	}
   	else PE("Not Possible");

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

// 2
// abc cab caa
// ritesh irtesh irtehs

// Sample Output:

// Not Possible
// Possible 
