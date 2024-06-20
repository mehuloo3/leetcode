class Solution {
public:
    int search(vector<int> &nums,int x)
    {
         int start=0,end=nums.size();
        while (start<end) {
            int mid=start+(end-start)/2;
            if (nums[mid]>x) {
                end=mid;
            } else {
                start= mid+1;
            }
        }
        return start;
    }
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries)
    {
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++)
        {
            nums[i]+=nums[i-1];
        }
        vector<int>ans;
        for(int i=0;i<queries.size();i++)
        {
           ans.push_back(search(nums,queries[i])); 
        }
        return ans;
    }
};