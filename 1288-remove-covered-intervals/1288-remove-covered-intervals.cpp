class Solution {
public:
    bool static comp (vector <int> &a, vector <int> &b) {
        if (a[0] == b[0]) {
            return a[1] > b[1];
        }
        else return a[0] < b[0];
    }
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), comp);
       
        for (int i = 0; i < intervals.size() - 1; i++) {
            if (intervals[i][1] >= intervals[i+1][1]) {
                intervals.erase(intervals.begin() + i+1);
                i--;
            }
        }
        return intervals.size();
    }
};