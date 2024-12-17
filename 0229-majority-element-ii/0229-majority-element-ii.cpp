class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        unordered_map<int,int>ans;
        vector<int>res;
        for(auto i:nums)
        {
            ans[i]++;
        }
        
        for(auto i:ans)
        {
            if(i.second>nums.size()/3)
            {
                res.push_back(i.first);
            }
        }
        return res;
    }
};