class Solution 
{
public:
    int fib(int n) 
    {
        if (n <= 0)
            return n;
        else if (n == 1)
            return 1;

        int last = fib(n - 1);
        int slast = fib(n - 2);
        return (last + slast);   
        
    }
};