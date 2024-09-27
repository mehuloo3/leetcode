class Solution {
public:
    bool checkPerfectNumber(int num) {
        // int sum=0;
//         int x=num;
//         for(int i=1;i<=num;i++)
//         {
//             if(num%i==0)
//             {
//               sum+=i;  
//             }
//              if(sum==x) return true;
//         }
       
//         return false;
        
        int sum=0;
        for(int i=1;i<=num/2;i++)
        {
            if(num%i==0)
            {
              sum+=i;  
            }
        }
       
        return sum==num;
    }
};