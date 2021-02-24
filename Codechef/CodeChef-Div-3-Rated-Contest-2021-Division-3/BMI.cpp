//https://www.codechef.com/CCRC21C/problems/BMI

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define mp  make_pair
#define pb  push_back
#define eb  emplace_back
#define f   first
#define s   second
#define ll  long long
using namespace std;

void solve(){
	ll m=0, h=0;
	cin >> m >> h;
	h = h*h;
	ll r = m/h;
	if (r <= 18) 			   {cout << 1 << endl;}
	else if(r <= 24 && r >= 19){cout << 2 << endl;}
	else if(r <= 29 && r >= 25){cout << 3 << endl;}
	else if(r >= 30)           {cout << 4 << endl;}	
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

// 3
// 72 2
// 80 2
// 120 2

// Sample Output

// 1
// 2
// 4

