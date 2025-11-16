class Solution {
public:
    int countOdds(int low, int high) 
    {
        int odd=0;
        int even = 0;
        int i;
        for(i=low ; i<=high ; i++)
        {
            if(i % 2 == 0) even ++;
            else odd++;
        }
        return odd;
    }
};