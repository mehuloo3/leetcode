class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        vector<int>ans;
        int res=0;
        unordered_map<int,int>map;
        for(auto i:nums)
        {
            map[i]++;
        }
        for(auto i:map)
        {
            if(i.second>1)
            {
                res^=i.first;
            }
        }
        return res;
    }
};