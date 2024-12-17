class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int pref=1,suf=1;
        vector<int>ans(nums.size(),1);
        
        for(int i=0;i<nums.size();i++)
        {
            ans[i]=pref;
            pref*=nums[i];
        }
        for(int i=nums.size()-1;i>=0;i--)
        {
            ans[i]*=suf;
            suf*=nums[i];
        }
        return ans;
    }
};