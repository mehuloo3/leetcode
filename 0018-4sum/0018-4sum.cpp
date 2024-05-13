class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        set<vector<int>>a;
        vector<vector<int>>res;

        for (int i = 0; i < n-3; i++) {
            for (int j = i + 1; j < n-2; j++) {
                int left = j + 1;
                int right = n - 1;
                while (left < right) {
                    long long sum =(long long) nums[i] + nums[j] + nums[left] + nums[right];
                    if (sum == target) {
                        a.insert({nums[i], nums[j], nums[left], nums[right]});
                        left++;
                        right--;
                    } else if (sum < target) {
                        left++;
                    } else {
                        right--;
                    }
                }
            }
        }
        for(auto x:a)
        {
            res.push_back(x);
        }
        return res;
    }
};