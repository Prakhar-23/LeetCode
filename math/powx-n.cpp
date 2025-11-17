class Solution {
public:
    double myPow(double x, int n) 
    {
      long long exp = n;          // use long long to safely handle INT_MIN

        if (exp == 0) return 1;     // x^0 = 1

        // If exponent is negative, invert base and make exponent positive
        if (exp < 0) {
            x = 1.0 / x;
            exp = -exp;
        }

        double result = 1.0;

        // Fast exponentiation
        while (exp > 0) {
            if (exp % 2 == 1) {     // odd exponent
                result *= x;
            }
            x *= x;                 // square the base
            exp /= 2;               // halve the exponent
        }

        return result;
    }
};