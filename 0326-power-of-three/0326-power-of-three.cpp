class Solution {
public:
    // bool check(int n)
    // {
    //     int i=0;
    //     while(i<n)
    //     {
    //         if(i%3==0)
    //         {
    //             num+
    //         }
    //     }
    // }
    bool isPowerOfThree(int n) {
          if(n==0 || n<0) return false;
          else if(n==1) return true;
        
        if(n%3!=0)
        {
            return false;
            }
         return isPowerOfThree(n/3);
    }
};