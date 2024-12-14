class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
            {
                int x=abs(nums[i])%n;
                int y=(i+x)%n;
                ans[i]=nums[y];
            }
            else if(nums[i]<0)
            {
                int a=abs(nums[i])%n;
                int b=(i-a+n)%n;
                ans[i]=nums[b];
            }else
            {
                ans[i]=nums[i];
            }
           
        }
        return ans;
    }
};