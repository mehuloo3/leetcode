class Solution {
public:
    int prime(int n)
    {
        if(n<2) {
            return 0;
        }  
        
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0) return 0;
        }
        
        return 1;
    }
    int diagonalPrime(vector<vector<int>>& nums) {
        int row=nums.size();
        int maxi=0;
        for(int i=0;i<row;i++)
        {
                if(prime(nums[i][i]))
                {
                    maxi=max(maxi,nums[i][i]);
                }
                
                  if(prime(nums[i][row-i-1]))
                   {
                       maxi=max(maxi,nums[i][row-i-1]);
                   }
            
                   }
                   return maxi;
    }
};