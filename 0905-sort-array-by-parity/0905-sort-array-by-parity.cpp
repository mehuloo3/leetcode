class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
      
        vector<int>ans;
        int j=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                // ans.push_back(nums[i]);
                swap(nums[i],nums[j]);
                j++;
            }
           // j++;
        }
        return nums;
    }
};