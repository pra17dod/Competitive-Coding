// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    void recCall (vector <int>& arr, int N, int id, int sum, vector <int>& res) {
        if (id == N) return;
        sum += arr[id];
        res.push_back(sum);
        recCall (arr, N, id + 1, sum, res);
        sum -= arr[id];
        recCall (arr, N, id + 1, sum, res);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector <int> res = {0};
        int sum = 0;
        recCall (arr, N, 0, sum, res);
        return res;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends