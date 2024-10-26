class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>ans; 
        for(int i=0;i<nums.size();i++)
        {
        string a=to_string(nums[i]);
        
            for(auto j:a)
            {
                ans.push_back(j-'0');
            }
        }
        return ans;
    }
};