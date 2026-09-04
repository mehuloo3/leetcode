class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        
        int n=nums.size();
        int ans;
        for(int i=0;i<n;i++)
        {
            int mini=nums[i],maxi=nums[i];
            for(int j=0;j<i;j++)
            {
             maxi=max(maxi,nums[j]);
            }
            for(int j=i+1;j<n;j++)
            {
            mini=min(mini,nums[j]);
            }
            if(abs(maxi-mini)<=k)
            {
                return i;
            }
        }
        return -1;
    }
};