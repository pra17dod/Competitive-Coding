//https://www.codechef.com/problems/COPS

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

	    ll m=0, x=0, y=0;
	    cin >> m >> x >> y;

	    int ar[m];
	    for (int i = 0; i < m; ++i){
	    	cin >> ar[i];
	    }

	    sort(ar , ar + m);

	    int p = x*y;
	    int count = 0;

	    if (ar[0]-1-p > 0){
	    	count += (ar[0]-1 -p);
	    }

	    for(int i=1; i < m; i++){
	    	if( (ar[i-1]+p) < (ar[i]-1-p) ){
	    		count += ar[i] - ar[i-1] -1-2*p;
	    	}
		}

		if (ar[m-1]+p < 100){
			count+= 100 - (ar[m-1] + p);
		}

		cout << count << endl;

	}
	return 0;
}



// Sample

// Input
// 3
// 4 7 8
// 12 52 56 8
// 2 10 2
// 21 75
// 2 5 8
// 10 51


// Output
// 0
// 18
// 9
