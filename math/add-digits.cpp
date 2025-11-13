class Solution {
public:
    int addDigits(int num) 
    {
        int final=0;
        int newFinal=0;
        if(num == 0) return 0;
        while(num)
        {
            final += num%10;
            num = num/10;
        }
        if(final > 9)
        {
            newFinal += final%10;
            final = final/10;
        }
         return newFinal+final;
    }
};