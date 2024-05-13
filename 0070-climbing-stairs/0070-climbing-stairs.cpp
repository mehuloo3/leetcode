class Solution {
public:
    int climbStairs(int n) {

        int d[n+1];
        for(int i=0;i<=n;i++)
         d[i]=0;

        d[1]=1;

        if(n>=2)
          d[2]=2;

        for(int i=3;i<=n;i++)
        {
            d[i]=d[i-1]+d[i-2];
        } 
      return d[n];
    }
  
};


//
// if(n==1 || n==2)
//      return 1;
//     return climbstaire(n-1)+climbstaire(n-2);

//
// int t[46]={0};
// if(n==1)
// {
//     t[n]=1;
//     return 1;
// }
// if(n==2)
// {
//     t[n]=2;
//     return 2;
// }
// else if(t[n]!=0)
//   return t[n];
//  table[n]=climbStairs[n-1]+climbStairs[n-2];
//   return t[n];
