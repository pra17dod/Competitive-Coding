class Solution {
public:
    int lastStoneWeight(vector<int>& st) {
        priority_queue <int> pq;
        for (auto i : st) {
            pq.push(i);
        }
        while (pq.size() > 1) {
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();
            if (a != b) { 
                pq.push(abs(a - b));
            }
        }
        if (!pq.empty()) {
            return pq.top();
        }
        else return 0;
    }
};