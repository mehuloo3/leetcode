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

    vector<int> prefix(nums.size());
    prefix[0] = nums[0];
    for(int i = 1; i<nums.size();++i) {
        prefix[i]=max(prefix[i - 1], nums[i]);
    }
    vector<int> suffMin(n);
    suffMin[n - 1] = nums[n - 1];

    for (int i = n - 2; i >= 0; --i) {
        suffMin[i] =min(suffMin[i + 1], nums[i]);
    }
   for(int i=0;i<n;i++)
   {
       if(prefix[i]-suffMin[i]<=k)
       {
           return i;
       }
   }
     return -1;
    }
};