//https://www.codechef.com/CCHI2021/problems/CCBTS02

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL);
#define mp  make_pair
#define pb  push_back
#define eb  emplace_back
#define f   first
#define s   second
typedef int long long ll;
using namespace std;

void solve(){

	ll n=0;
	cin >> n;
	int on = 0, error= 0;
	string s1 = "stop";

	for (ll i=0; i < n; i++){
		string s;
		cin.ignore();
		cin >> s;
		if(s == s1){
			if (!on){
				error = 1;
			}
			else on=0;				
		}
		else on=1;
	}

	if(error){
		cout << "404" << endl;
 	}
 	else cout << "200" << endl;

}

int main(){
	fast;
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

// 5
// 2
// start stop
// 2
// restart stop
// 3
// start restart stop
// 3
// start stop stop
// 1
// stop

// Sample Output

// 200
// 200
// 200
// 404
// 404
