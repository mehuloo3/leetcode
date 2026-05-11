class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>ans;
     for(auto i:nums)
     {
        int x=i;
        string s=to_string(x);
        for(auto j:s)
        {
            ans.push_back(j-'0');
        }
     }   
     return ans;
    }
};