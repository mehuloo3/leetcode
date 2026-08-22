class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
    vector<int>ans;
    for(auto i:nums)
    {
        if( mp[i]++<k)
        {
            ans.push_back(i);
        }
    }
    return ans;
    }
};