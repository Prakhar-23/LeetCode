class Solution {
public:
    double myPow(double x, int n) 
    {
        if (n == 0) return 1;

    long long exp = n;

    if (exp < 0) {
        x = 1 / x;
        exp = -exp;
    }

    double result = 1;
    for (long long i = 0; i < exp; i++) {
        result *= x;   // just multiply n times
    }

    return result;
    }
};