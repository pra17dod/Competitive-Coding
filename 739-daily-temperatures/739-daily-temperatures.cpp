class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        stack <pair <int, int>> st;
        vector <int> vec (temp.size());
        for (int i = temp.size() - 1; i >= 0; i--) {
            while (!st.empty() and st.top().first <= temp[i]) st.pop();
            
            if (st.empty()) vec[i] = 0;
            else {
                vec[i] = st.top().second - i;
            }
            
            st.push({temp[i], i});
        }
        return vec;
    }
};