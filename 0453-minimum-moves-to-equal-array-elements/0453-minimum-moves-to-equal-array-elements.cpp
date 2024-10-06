class Solution {
public:
    int minMoves(vector<int>& nums) {
     int mini=INT_MAX;
        for(auto i:nums)
        {
            mini=min(mini,i);
        }
        int cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            cnt+=abs(mini-nums[i]);
        }
        return cnt;
    }
};