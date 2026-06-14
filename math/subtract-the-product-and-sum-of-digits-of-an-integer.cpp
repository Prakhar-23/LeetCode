class Solution {
public:
    int subtractProductAndSum(int n)
    {
        int a =n;
        int sum = 0 ;
        int p=1;
         
        while(n!=0)
        {
            sum+=n%10;
            n=n/10;
        } 

        while(a!=0)
        {
            p*=(a%10);
            a=a/10;
        } 

        return p-sum;

    }
};