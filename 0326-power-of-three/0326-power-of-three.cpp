class Solution {
public:
    bool isPowerOfThree(int n) {
        
        //using the recursion
//           if(n==0 || n<0) return false;
//           else
//               if(n==1) return true;
        
//         if(n%3!=0)
//         {
//             return false;
//         }
//          return isPowerOfThree(n/3);
        
        //use the while
        
        if(n<=0) return false;
        
        while(n%3==0)
        {
            n=n/3;
        }
        return n==1;
    
    }
};