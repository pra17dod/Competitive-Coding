class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        map <int, int> ps;
        priority_queue <int> pq;
        int i = 1, j = 1;
        while (j <= nums.size()+1  and i <= j) {
            if (j == nums.size()+1 or ps[nums[j-1]] != 0) {
                // cout << i << " " << j << endl;
                // cout << ps[nums[j-1]] << endl;
                pq.push(accumulate(nums.begin() + i - 1, nums.begin() + j - 1, 0));
                if (j != nums.size() + 1) {
                    while (i < ps[nums[j-1]] + 1) {
                        ps[nums[i-1]] = 0;
                        i++;
                    }
                    ps[nums[j-1]] = j;
                }
            }
            else {
                ps[nums[j-1]] = j;
            }
            j++;
        }
        return pq.top();  
    }
};