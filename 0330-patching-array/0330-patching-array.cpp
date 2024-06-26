class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
       long long reach = 0, i = 0, ans = 0;

        while (reach < n) {
            if (i < nums.size() and reach + 1 >= nums[i]) {
                reach += nums[i];
                i++;
            } else {
                reach = 2 * reach + 1;
                ans++;
            }
        }

        return ans;
        
    }
};