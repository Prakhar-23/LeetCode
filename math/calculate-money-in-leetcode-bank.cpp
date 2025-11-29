class Solution {
public:
    int totalMoney(int n) {
        long long w=n/7;
        long long r=n%7;
        long long fullweeks=28*w+7*(w*(w-1)/2);
        long long rem = r*w+r*(r+1)/2;
        return (fullweeks + rem) ;
    }
};