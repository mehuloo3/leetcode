class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int mini=*min_element(nums.begin(),nums.end());
        if(mini<k)
        {
            return -1;
        }
        int cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>k)
            {
                cnt++;
                
                while(i+1<nums.size() and nums[i]==nums[i+1])
                {
                    i++;
                }
            }
        }
        return cnt;
    }
};