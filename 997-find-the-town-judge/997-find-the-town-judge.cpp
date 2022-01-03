class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector <int> in(n+1, 0);
        int ans = -1;
        for (auto &i : trust) {
            in[i[0]]--;
            in[i[1]]++;
        }
        for (int i = 0; i < n+1; i++) {
            if (in[i] == n-1) ans = i;
        }
        
        return ans;
    }
};