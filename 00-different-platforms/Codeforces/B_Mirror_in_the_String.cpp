//{Link to problem}

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
    ll n=0;
    cin >> n;
    vector <char> ans;
    char c;
    cin >> c;
    ans.push_back(c);
    n--;
    bool t = false;
    if (n) {
        cin >> c;
        n--;
        if (ans.back() > c) {
            ans.push_back(c);
        }
        else t = true;
    }
    while (n--) {
        char c;
        cin >> c;
        if (!t) {
            if (ans.back() >= c) {
                ans.push_back(c);
            }
            else t = true;
        }
    }
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i];
    }
    for (int i = ans.size() - 1; i >= 0; i--) {
        cout << ans[i];
    }
    cout << endl;
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


// Sample Output

