class Solution {
public:
    double pov(double x, long long n) {
        if (n == 0 or n == 1) {
            return pow(x,n);
        }
        else if (n%2 == 0) {
            return pov(x*x, n/2);
        }
        else
            return x*pov(x, n-1);
    }    
    
    double myPow(double x, int n) {
        if (n < 0) {
            return (long double)(1/pov(x, abs((long long)n))); 
        }
        else return pov(x,(long long)n);           
    }
};