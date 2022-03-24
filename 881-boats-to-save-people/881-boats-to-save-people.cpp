class Solution {
public:
    int numRescueBoats(vector<int>& p, int lt) {
        sort(p.begin(), p.end());
        int cnt = 0;
        int i = 0, j = p.size() - 1;
        while (i <= j) {
            if (p[i] + p[j] <= lt) {
                cnt++, i++, j--;
            }
            else {
                j--, cnt++;
            }
        }
        return cnt;
    }
};