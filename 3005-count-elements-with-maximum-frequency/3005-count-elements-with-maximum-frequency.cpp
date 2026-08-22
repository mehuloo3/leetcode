class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto i:nums)
        {
         mp[i]++;
        }
        int cnt=0;
        int max_fr=INT_MIN;
        for(auto i:mp)
        {
            max_fr=max(max_fr,i.second);
        }
        for(auto i:mp)
        {
            if(i.second==max_fr)
            {
                cnt++;
            }
        }
        return cnt*max_fr;
    }
};