class Solution {
public:
    int uniquePaths(int m, int n) {
        
        // memo DP
        
        int dp[m][n];
        
        for(int i=0;i<m;i++)
            dp[i][0]=1;
        for(int j=0;j<n;j++)
            dp[0][j]=1;
        
        for(int i=1;i<m;i++)
        {
           for(int j=1;j<n;j++)
           {
              dp[i][j]=dp[i-1][j]+dp[i][j-1];
           }
        }
        return dp[m-1][n-1];
        // DP
        // int path[100][100];
        // int i,j;
        // if(!m || !n)
        // {
        //     return 0;
        // }
        // for(i=0;i<m;i++)
        // {
        //     for(j=0;j<n;j++)
        //     {
        //         if(i==0 || j==0)
        //         {
        //             path[i][j]=1;
        //         }
        //         else
        //         {
        //             path[i][j]=path[i-1][j]+path[i][j-1];
        //         }
        //     }
        // }
        // return path[m-1][n-1];
        
        
        //res-TLE
        // if(m==1 or n==1)
        //      return 1;
        // return uniquePaths(m-1,n)+uniquePaths(m,n-1);
    }
};