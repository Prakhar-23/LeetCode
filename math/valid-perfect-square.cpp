class Solution {
public:
    bool isPerfectSquare(int num) {
      int n = num/2;
      for(int i=0 ; i<=num ; i++)
      {
        if(i*i == num) return true;
      }
      return false;  
    }
};