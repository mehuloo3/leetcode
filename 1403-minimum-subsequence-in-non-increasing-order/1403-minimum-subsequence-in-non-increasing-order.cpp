class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
       sort(nums.rbegin(),nums.rend());
        int s1=0,s2=0;
        vector<int>ans;
        for(auto i:nums)
        {
            s1+=i;
        }
        for(auto j:nums)
        {
            s2+=j;
            ans.push_back(j);
            if(s2>s1-s2)
            {
                break;
            }
        }
        return ans;
    }
};