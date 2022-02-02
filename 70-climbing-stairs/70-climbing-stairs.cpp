// Space O(n)

// vector <int> vec(46, -1);

// class Solution {   
// public:    
//     int climbStairs(int n) {
//         if (n < 3) return n;
//         if (vec[n] != -1) return vec[n];
//         else return vec[n] = climbStairs(n-1) + climbStairs(n-2);
//     }
// };

// Space O(1)

class Solution {   
public:    
    int climbStairs(int n) {
        if (n < 3) return n;
        int n1 = 1, n2 = 2;
        n-=2;
        while (n--) {
            n2 = n1 + n2;
            n1 = n2 - n1;
        }
        return n2;
    }
};