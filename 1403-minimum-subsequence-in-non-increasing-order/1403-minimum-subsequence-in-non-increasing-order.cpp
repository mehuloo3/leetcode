class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.rbegin(),nums.rend());
        vector<int>ans;
        int sum=0;
        for(auto i:nums)
        {
            sum+=i;
        }
        int s=0;
        for(auto i:nums)
        {
            s+=i;
            ans.push_back(i);
            if(s+s>sum)
            {
                break;
            }
        }
        
        return ans;
    }
};