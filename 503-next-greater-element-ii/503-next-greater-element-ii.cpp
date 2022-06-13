class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        auto it = max_element(nums.begin(), nums.end());
        int dis = distance (nums.begin(), it);
        
        stack <int> st;
        vector <int> vec(nums.size());
        
        for (int i = dis; i >= 0; i--) {
            while (!st.empty() and st.top() <= nums[i]) {
                st.pop();
            }
            if (st.empty()) vec[i] = -1;
            else vec[i] = st.top();
            
            
            st.push(nums[i]);        
            
            if (i == 0 and dis != nums.size() - 1) {
                i = nums.size();
            }
            else if (i == dis + 1) {
                break;
            }
        }
        
        return vec;
    }
};