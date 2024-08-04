class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int>ans;
        int sum2=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                int sum=0;
                for(int k=i;k<=j;k++)
                {
                    sum+=nums[k];
                }
                ans.push_back(sum);
            }
        }
        sort(ans.begin(),ans.end());
        for(int i=left-1;i<right;i++)
        {
           sum2=(sum2+ans[i])%1000000007;;
        }
        return sum2;
    }
};