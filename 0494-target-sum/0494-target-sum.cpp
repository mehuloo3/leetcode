class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {    
    unordered_map<int, int> dp;
    dp[0] = 1;
    for (int i:nums) {
        unordered_map<int,int>mp;
        for (auto& [current, cnt] : dp) {
            mp[current+i]+=cnt;
            mp[current-i]+=cnt;
        }
        dp=mp;
    }

    return dp[target];
    }
};