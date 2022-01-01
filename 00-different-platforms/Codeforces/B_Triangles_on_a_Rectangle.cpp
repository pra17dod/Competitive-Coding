//https://codeforces.com/contest/1620/problem/B

#include <bits/stdc++.h>
using namespace std;

typedef long long int          ll;
typedef vector<ll>             vec;
typedef pair<ll,ll >           pll;
typedef vector<ll>::iterator   itr;


#define FAST                   ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void solve(){
    ll w, h;
    cin >> w >> h;
    ll ans = 0;
    for (int i = 0; i < 4; i++) {
        int t; cin >> t;
        vector <int> tmp;
        while(t--) {
            int p; cin >> p;
            tmp.push_back(p);
        }
        if (i < 2) {
            ll d = h*(tmp.back() - tmp.front());
            ans = max(ans, d);
        }
        else {
            ll d = w*(tmp.back() - tmp.front());
            ans = max(ans, d);
        }
    }
    cout << ans << endl;
    

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
    //solve();
    return 0;
}


// Sample Input


// Sample Output
