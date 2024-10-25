class Solution {
public:
    int find(int n,vector<int>&dp)
    {
        if(n==1) return 0;
        if(dp[n]!=-1) return dp[n];
        
        bool ans=0;
        for(int i=1;i*i<n;i++)
        {
            if(n%i==0) 
            {
                if(!find(n-i,dp))
                {
                    ans=1;
                    break;
                }
            }
        }
        return dp[n]=ans;
    }
    bool divisorGame(int n) {
        vector<int>dp(n+1,-1);
        return find(n,dp);
        
    }
};