class Solution {
public:
    int uniquePaths(int m, int n) {
        // DP
        int path[100][100];
        int i,j;
        if(!m || !n)
        {
            return 0;
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i==0 || j==0)
                {
                    path[i][j]=1;
                }
                else
                {
                    path[i][j]=path[i-1][j]+path[i][j-1];
                }
            }
        }
        return path[m-1][n-1];
        
        
        //res-TLE
        // if(m==1 or n==1)
        //      return 1;
        // return uniquePaths(m-1,n)+uniquePaths(m,n-1);
    }
};