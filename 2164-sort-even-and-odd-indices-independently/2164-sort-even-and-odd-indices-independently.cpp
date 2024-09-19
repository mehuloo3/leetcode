class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        
        vector<int>v1;
        vector<int>v2;
        for(int i=0;i<nums.size();i++){
            if(i%2==0)
            {
                v1.push_back(nums[i]);
            }
            else
            {
                v2.push_back(nums[i]); 
            }
        }
        
        int k=0,l=0;
        sort(v2.rbegin(),v2.rend());
        sort(v1.begin(),v1.end());
        for(int i=0;i<nums.size();i++)
        {
            if(i%2==0)
            {
                     nums[i]=v1[k++];
            }
            else
            {
                     nums[i]=v2[l++];
            }
        }
        
        return nums;
    }
};