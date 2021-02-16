//https://www.codechef.com/problems/FRGTNLNG

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
typedef long long int ll;
using namespace std;

int main(){
	fast;
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ll t=0;
    cin >> t;
    while (t--){
	    ll n=0, k=0;
	    cin >> n >> k;

	    vector<string> dic;
	    vector<string> res;

	   	for(ll i=0; i < n; i++){
	   		string s;
			cin >> s;
			dic.push_back(s);
			res.push_back("NO");
			 
		}

		for(ll i = 0; i < k; i++){
			ll m = 0;
			cin >> m;
			for(ll i = 0; i < m; ++i){
				string s;
				cin >> s;
				for(ll i=0; i < n; i++){
					if( dic[i] == s){
						res[i] = "YES";
					}

				}
			}
		}
		
		for(ll i=0; i < n; i++){
			cout << res[i] << " ";
		}
		cout << endl;

	}
	return 0;
}



// Sample

// Input
// 2
// 3 2
// piygu ezyfo rzotm
// 1 piygu
// 6 tefwz tefwz piygu ezyfo tefwz piygu
// 4 1
// kssdy tjzhy ljzym kegqz
// 4 kegqz kegqz kegqz vxvyj


// Output
// YES YES NO 
// NO NO NO YES 

