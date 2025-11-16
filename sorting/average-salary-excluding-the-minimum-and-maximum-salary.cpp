class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        int min = salary.at(0);
        int max = salary.back();
        long double total = 0;
        for(int x : salary)
        {
            total += x;
        }
        total = total - (min + max);
        double avg = ( total/(salary.size()-2) );
        return avg;
    }
};