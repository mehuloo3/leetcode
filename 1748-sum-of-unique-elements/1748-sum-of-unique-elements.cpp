class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int>map;
        
        for(auto i:nums)
        {
            map[i]++;
        }
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            if(map[nums[i]]==1)
            {
                sum+=nums[i];
            }
        }
        return sum;
    }
};