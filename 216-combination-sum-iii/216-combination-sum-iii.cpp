class Solution {
    vector<vector<int>> ans;
public:
    void recur(int k, int n, vector<int>& temp, int index, int sum) {
        if (temp.size() == k and sum == n) ans.push_back(temp);
        else if (sum > n || index > 9) return;
        else {
			// plain recursion
            temp.push_back(index);
            recur(k,n,temp,index + 1, sum + index);
            temp.pop_back();
            recur(k,n,temp,index + 1, sum);
			
            // Using loops;
            // for (int i = index; i < 10; ++i) {
            //     temp.push_back(i);
            //     recur(k,n,temp,i + 1, sum + i);
            //     temp.pop_back();
            // }
        }
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
		// Additional case to boost speed as if the series sum (1,2,3...k) is already greater than n. 
		// And we definitely need atleast k numbers in a vector. That is impossible. So just return ans.
        if (k * (k+1) / 2 > n) return ans;
        
        vector<int> temp;
        recur(k,n,temp,1,0);
        
        return ans;
    }
};