class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>map;
        vector<int>ans;
        for(auto i:nums)
        {
            map[i]++;
        }
        for(auto i:map)
        {
            if(i.second==1)
            {
                ans.push_back(i.first);
            }
        }
        int res;
        for(int i=0;i<ans.size();i++)
        {
            res=ans[i];
        }
        return res;
    }
};