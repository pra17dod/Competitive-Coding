//https://www.codechef.com/LTC22021/problems/LTC04

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
#define FOR(a, b, c)       for (ll (a) = (b); (a) < (c); (a)++) 
#define FORL(a, b, c)       for (ll (a) = (b); (a) <= (c); (a)++) 
#define FORR(a, b, c)       for (ll (a) = (b); (a) >= (c); (a)--) 
#define FAST                ios_base::sync_with_stdio(false); cin.tie(NULL)

void solve(){
    char n;
    string s1, s2;
    cin.ignore();
    cin >> n >> s1 >> s2;

    FOR( i,0, s1.length()){
        s1[i] = (char)tolower(s1[i]);
    }
    FOR( i,0, s2.length()){
        s2[i] = (char)tolower(s2[i]);
    }
    if (n=='A'){
        cout << s1;
        s2[0]= (char)toupper(s2[0]);
        cout << s2 << endl;
    }    
    else if (n=='B'){
        cout << s1 << "_";
        cout << s2 << endl;
    }
    else if (n=='C'){
        FOR(i,0, s1.length()){cout << (char)toupper(s1[i]);}
        cout << '_';
        FOR(i,0, s2.length()){cout << (char)toupper(s2[i]);}
        cout << endl;
    }
    else if (n=='D'){
        s1[0] = (char)toupper(s1[0]);
        cout << s1 << "-";
        s2[0] = (char)toupper(s2[0]);
        cout << s2 << endl;
    }
    else {
        FOR(i,0, s1.length()){
            if( i%2 == 1) cout << (char)toupper(s1[i]);
            else cout << s1[i];
        }
        cout << '|';
        FOR(i,0, s2.length()){
            if( i%2 == 1) cout << (char)toupper(s2[i]);
            else cout << s2[i];
        }
        cout << endl;
    } 
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

// 5
// A first second
// B first second
// C first second
// D first second
// F first second 

// Sample Output:

// firstSecond
// first_second
// FIRST_SECOND
// First-Second
// fIrSt|sEcOnD 