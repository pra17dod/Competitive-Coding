//https://www.codechef.com/problems/CNOTE

#include <iostream>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
typedef long long int ll;
using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t=0;
    cin >> t;
    while (t--){
	    int x=0, y=0, k=0, n=0;
	    cin >> x >> y >> k >> n;

	   	int flag=0;
	 
		for(int i=0; i < n; i++){
			int p=0, c=0;
			cin >> p >> c;
			if ( p >= (x-y) && c <= k ){
				flag=1;
			}			
		}

		if(flag){
			cout << "LuckyChef" <<endl;
		}
		else 
			cout << "UnluckyChef" << endl;
	}
	return 0;
}



// Sample

// Input
// 3
// 3 1 2 2
// 3 4
// 2 2    
// 3 1 2 2
// 2 3
// 2 3    
// 3 1 2 2
// 1 1
// 1 2

// Output
// LuckyChef
// UnluckyChef
// UnluckyChef
