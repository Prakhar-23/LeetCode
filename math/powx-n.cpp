class Solution {
public:
    double myPow(double x, int n)
    {
        long double res=1.00;
        if(n==0) return 1;
        
        else if(n<0)
        {
            n=-n;
            for(double i=1;i<=n;i++)
         {
            res *= x;
         }
         return (1.00/res);
        }

        else
        {
         for(int i=1;i<=n;i++)
         {
            res *= x;
         }
         return res;
        }
    }
};