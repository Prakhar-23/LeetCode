class Solution {
public:
    int addDigits(int num) 
    {
        int final=0;
        if(num == 0) return 0;
        while(num)
        {
            final += num%10;
            num = num/10;
        }
        if(final > 9)
        {
            while(num)
         {
            final += num%10;
            num = num/10;
         }
         return final;
        }
    }
};