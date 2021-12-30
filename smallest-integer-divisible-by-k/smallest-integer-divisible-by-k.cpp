class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if (k % 2 == 0 or k % 5 == 0) return -1;
        
        long long int n = 0;
        int len = 0;
        while (true) {
            n = (n*10 + 1) % k;
            len++;
            if (n == 0) return len;
            
            if (len > k) break;
        }   
        return -1;
    }
};