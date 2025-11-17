class Solution {
public:
    double myPow(double x, int n) {
        long double res = 1.0;

        if (n == 0) return 1.0;

        long long N = n;   

        if (N < 0)
        {
            N = -N;       
            for (long long i = 1; i <= N; i++)
            {
                res *= x;
            }
            return 1.0 / res;  
        }
        else
        {
            for (long long i = 1; i <= N; i++)
            {
                res *= x;
            }
            return res;
        }
    }
};