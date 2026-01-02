class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n=nums.size();
        map<int,int>mp;
        int ans;
        for(auto i:nums)
        {
            mp[i]++;
        }
        for(auto i:mp)
        {
            if(i.second==n/2)
            {
                ans=i.first;
            }
        }
        return ans;
    }
};