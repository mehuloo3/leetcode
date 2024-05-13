class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // int n=nums.size();
        // return nums[n/2];

  int candidate;
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(count==0)
            {
                count=1;
                candidate=nums[i];
            }
            else
            {
                if(candidate==nums[i])
                    count++;
                else
                   count--;
            }
        }
        return candidate;
    }
};