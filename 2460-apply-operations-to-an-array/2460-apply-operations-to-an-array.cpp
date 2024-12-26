class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1])
            {
                nums[i-1]=2*nums[i-1];
                nums[i]=0;
            }
        }
        vector<int>ans;
        for(auto i:nums)
        {
            if(i) { ans.push_back(i);}
        }
        for(int i=ans.size();i<nums.size();i++)
        {
            ans.push_back(0);
        }
        return ans;
    }
};