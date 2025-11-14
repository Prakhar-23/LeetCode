class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int n = nums.size();

        //actual sum;
        int sum_total= ( (n*(n+1))/2 );

        int sum_raw=0;
        //vector ka sum nikalenge
        for(int x : nums)
        {
            sum_raw += x;
        }

        return sum_total - sum_raw;
    }
};