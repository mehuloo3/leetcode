class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        
        int maxi=*max_element(nums.begin(),nums.end());
        int mini=*min_element(nums.begin(),nums.end());
        sort(nums.begin(),nums.end());
        vector<int>ans;
        for(int i=mini;i<=maxi;i++)
        {
          ans.push_back(i);
        }
       vector<int>v;
       int j=0;
       for(int i=0;i<ans.size();i++)
       {
        if(j<ans.size() && ans[i]==nums[j])
        {
            j++;
        }else
        {
            v.push_back(ans[i]);
        }
       }
       return v;
    }
};