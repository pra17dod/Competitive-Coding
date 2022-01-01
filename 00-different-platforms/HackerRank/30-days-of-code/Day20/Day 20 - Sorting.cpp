#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
    	cin >> a[a_i];
    }
    // Write Your Code Here
    int no_swaps = 0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n-1; j++) {
            if (a[j+1]<a[j]) {
                swap(a[j],a[j+1]);
                no_swaps++;
            }
        }
        if(no_swaps==0){
            break;
        }
    }
    
    cout << "Array is sorted in " << no_swaps << " swaps." << endl;
    cout << "First Element: " << a[0] << endl;
    cout << "Last Element: " << a[n-1] << endl;
    
    return 0;
}
