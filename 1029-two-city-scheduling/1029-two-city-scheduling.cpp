class Solution {
public:
    static bool cmp (vector <int> &a, vector <int> &b) {
        return (a[0] - a[1]) < (b[0] - b[1]);
    }
    int twoCitySchedCost(vector<vector<int>>& ct) {
        sort (ct.begin(), ct.end(), cmp);
        int cost = 0;
        for (int i = 0; i < ct.size(); i++) {
            if (i >= ct.size()/2) {
                cost += ct[i][1];
            }
            else cost += ct[i][0];
        }
        return cost;
    }
};