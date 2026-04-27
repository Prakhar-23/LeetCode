class Solution {
public:
    bool check(vector<int>& nums)
    {
        int dp=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]>nums[i+1]) dp++;
        }
        if(nums[nums.size() - 1] > nums[0]) dp++;
        if(dp==0) return true;
        else if(dp == 1) return true;
        else return false;
    }
};