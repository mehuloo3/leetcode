class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        
        vector<int>v1,v2;
        for(int i=0;i<nums.size();i++)
        {
            if(i%2==0)
            {
                v1.push_back(nums[i]);
            }
            else
            {
                v2.push_back(nums[i]);
            }
        }
        
        int l=0;
        int m=0;
        sort(v1.begin(),v1.end());
        sort(v2.rbegin(),v2.rend());
        for(int i=0;i<nums.size();i++)
        {
            if(i%2==0)
            {
                nums[i]=v1[l++];
            }
            else
            {
                nums[i]=v2[m++];
            }
        }
        return nums;
    }
};