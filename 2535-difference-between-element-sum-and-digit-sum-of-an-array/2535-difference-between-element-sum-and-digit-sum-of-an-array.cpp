 class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum = 0, digit = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];

            int current = nums[i];

            while (current) {
                digit += current % 10;
                current /= 10;
            }
    
        }

        return abs(sum - digit);
    }
};
