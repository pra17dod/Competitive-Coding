class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue <int, vector <int>, greater <int>> pq;
        int i = 0;
        while (pq.size() < k and i < nums.size()) {
            pq.push(nums[i]);
            i++;
        }
        
        while (i < nums.size()) {
            pq.push(nums[i]);
            pq.pop();
            i++;
        }
                
        return pq.top();
    }
};