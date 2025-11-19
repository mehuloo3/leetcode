class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
       vector<int>arr;
       int n=nums.size();
       for(int i=0;i<n;i++)
       {
          string x=to_string(nums[i]);
          reverse(x.begin(),x.end());
          arr.push_back(stoi(x));
       }
       int m=arr.size();
       for(int i=0;i<m;i++)
       {
           nums.push_back(arr[i]);
       }
      sort(nums.begin(),nums.end());
      nums.erase(unique(nums.begin(),nums.end()),nums.end());
      return nums.size();
    }
};