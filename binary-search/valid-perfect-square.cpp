class Solution {
public:
    bool isPerfectSquare(long num) {
      long n = num/2;
      for(long i=0 ; i<=num ; i++)
      {
        if(i*i == num) return true;
      }
      return false;  
    }
};