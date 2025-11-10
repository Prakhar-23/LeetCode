class Solution {
public:
    int reverse(long long int x) {
        long long int rev=0;
        while(x!=0)
        {
        rev = rev*10 + x%10;
        x= x/10;
        }
        if (rev < pow(-2, 31) || rev > (pow(2, 31) - 1))
        {
        return 0;
        }
        else return rev;
    }
};