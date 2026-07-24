class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int ans;
        unordered_map<int,int>mp;
        for(auto i:nums)
        {
            mp[i]++;
        }
        for(auto i:mp)
        {
            if(i.second>1)
            {
                ans=i.first;
            }
        }
        return ans;
    }
};