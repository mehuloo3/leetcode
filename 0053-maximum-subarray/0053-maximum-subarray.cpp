class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=nums[0];
        int res=nums[0];
        int n=nums.size();
        for(int i=1;i<n;i++)
        {
            ans=max(nums[i],ans+nums[i]);
            if(ans>res)
            {
                res=ans;
            }
        }
       return res;
    }

};