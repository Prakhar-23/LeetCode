class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left = 0;
        int total = 0;
        for(int x : nums) total += x;

        for(int i = 0;i<nums.size();i++){
            left += nums[i];
            int right = total - left + nums[i];

            if(left == right) return i;
        }
        return -1;
    }
};