class Solution {
public:
    long long maximumValueSum(vector<int>& nums, int k, vector<vector<int>>& edges) {
        int n=nums.size();
        vector<int>arr(n);
        long long ans=0;
        for(int i=0;i<n;i++)
        {
            arr[i]=(nums[i]^k)-nums[i];
            ans=ans+nums[i];
        }
        sort(arr.begin(),arr.end());
        reverse(arr.begin(),arr.end());
        for(int i=1;i<n;i+=2)
        {
            ans=max(ans,(ans+arr[i]+arr[i-1]));
        }
        return ans;
    }
};