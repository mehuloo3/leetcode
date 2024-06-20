class Solution {
public:
    int search(vector<int> &nums,int x)
    {
         int l=0,r=nums.size();
        while (l<r) {
            int mid = (l + r) >> 1;
            if (nums[mid] > x) {
                r = mid;
            } else {
                l = mid + 1;
            }
        }
        return l;
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