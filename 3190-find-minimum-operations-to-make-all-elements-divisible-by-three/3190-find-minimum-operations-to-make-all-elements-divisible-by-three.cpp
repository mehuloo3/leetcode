class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int mini=INT_MAX;
        int cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            mini=min(nums[i]%3,3-(nums[i])%3);
            cnt+=mini;
        }
        return  cnt;
    }
};