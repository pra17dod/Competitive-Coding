class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort (intervals.begin(), intervals.end());
        vector <vector <int>> ans;
        pair <int, int> tmp;
        tmp.first = intervals[0][0];
        tmp.second = intervals[0][1];
        for (int i = 1; i < intervals.size(); i++) {
            if (intervals[i][0] <= tmp.second) {
                if (tmp.second < intervals[i][1])
                tmp.second = intervals[i][1];
            }  
            else {
                ans.push_back({tmp.first, tmp.second});
                tmp.first = intervals[i][0];
                tmp.second = intervals[i][1];
            }
            
        }
        ans.push_back({tmp.first, tmp.second});        
        return ans;
    }
};