class Solution {
public:
    //rec TLE
    // int find(int i,vector<int>&nums,int n)
    // {
    //     if(i>=n) return 0;
    //     return max(nums[i]+find(i+2,nums,n),find(i+1,nums,n));
    // }
     //DP
    int find(int i,vector<int>&nums,int n,vector<int>&dp)
    {
        if(i>=n) return 0;
        
        if(dp[i]!=-1)
            return dp[i];
        
        return dp[i]=max(nums[i]+find(i+2,nums,n,dp),find(i+1,nums,n,dp));
    }
    int rob(vector<int>& nums) {
        // my methode give  time bound
        // int ans=0;
        // int ele=nums[0];
        // for(int i=0;i<nums.size();i+=2)
        // {
        //  int x=nums[i]+nums[i+1];
        //  ele=max(ele,x);
        // }
        // return ele;
        
        //dp
        int n=nums.size();
        vector<int>dp(n+2,-1);
        return find(0,nums,n,dp);    
    }
};