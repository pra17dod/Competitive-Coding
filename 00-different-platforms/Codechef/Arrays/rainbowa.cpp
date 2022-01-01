//https://www.codechef.com/problems/RAINBOWA

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
	    ll n=0;
	    cin >> n;

	    ll ar[n];
	    int flag=1,x=1;

	   	for(ll i=0; i < n; i++){
			cin >> ar[i];
		}

		for(ll i=0; i < n/2 && n!=0; i++){
			if(ar[i]==x && ar[n-1-i] ==x){
				if( ar[i+1] == x+1 ){
					x++;
					continue;
				}
			}
			else {
				flag=0;
				break;
			}
		}
		
		if(flag && x==7) {
			cout<< "yes" << endl;
		}
		else 
			cout<< "no" << endl;

	}
	return 0;
}



// Sample

// Input
// 3
// 19
// 1 2 3 4 4 5 6 6 6 7 6 6 6 5 4 4 3 2 1
// 14
// 1 2 3 4 5 6 7 6 5 4 3 2 1 1
// 13
// 1 2 3 4 5 6 8 6 5 4 3 2 1


// Output
// yes
// no
// no

