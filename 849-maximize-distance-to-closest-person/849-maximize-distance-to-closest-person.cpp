class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        priority_queue <int> pq;
        bool f = false;
        int p = 0; 
        for (int i = 0; i < seats.size(); i++) {
            if (seats[i] == 0 and !f) {
                f = true;
                p = i;
            }
            else if (seats[i] == 1 and f) {
                f = false;
                if (p == 0) {
                    pq.push(i);
                }
                else pq.push((i - p + 1)/2);
            }
            else if (i == seats.size() - 1 and seats[i] == 0) {
                pq.push(i - p + 1);
            }
        }
        return pq.top();
    }
};