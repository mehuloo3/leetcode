class Solution {
public:
    bool increment(vector<int> &nums)
    {
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<=nums[i-1]) return false;
        }
        return true;
    }
    int incremovableSubarrayCount(vector<int>& nums)
    {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                vector<int>m;
                for(int k=0;k<i;k++)
                {
                  m.push_back(nums[k]);  
                }
                for(int k=j+1;k<n;k++)
                {
                  m.push_back(nums[k]);
                }
                if(increment(m))
            {
                ans++;
            }
            }
            
        }
        return ans;
    }
};