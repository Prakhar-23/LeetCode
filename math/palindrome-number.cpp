class Solution {
public:

    bool isPalindrome(long x) {
        int original = x;
        long rev=0;
        if (x<0) return false;
        while( x != 0 ){
            rev = rev*10 + x%10;
            x = x/10;
        }
        if(rev==original) return true;
        else return false;
    }
};