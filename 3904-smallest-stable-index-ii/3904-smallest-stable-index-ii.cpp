class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        // for(int i=0;i<n;i++)
        // {
        //     int  mini=nums[0];
        //     int  maxi=nums[0];
        //     for(int j=0;j<i;j++)
        //     {
        //       maxi=max(maxi,nums[j]);
        //     }
        //     for(int j=i;j<n;j++)
        //     {
        //      mini=min(mini,nums[j]);
        //     }
        //     if((maxi-mini)<=k)
        //     {
        //         return i;
        //     }
        // }
        // return -1;

    vector<int>Pre(nums.size());
    Pre[0]=nums[0];
    for(int i=1;i<nums.size();i++)
    {
        Pre[i]=max(Pre[i-1],nums[i]);
    }
    vector<int> Suff(n);
    Suff[n-1]=nums[n-1];

    for (int i=n-2;i>=0;i--) {
        Suff[i]=min(Suff[i+1],nums[i]);
    }
   for(int i=0;i<n;i++)
   {
       if(Pre[i]-Suff[i]<=k)
       {
           return i;
       }
   }
     return -1;
    }
};