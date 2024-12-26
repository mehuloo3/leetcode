class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        vector<double>ans;
        sort(nums.begin(),nums.end());
        int i=0,j=nums.size()-1;
        while(i<j)
        {
            double x=(nums[j]+nums[i])/2.0;
            ans.push_back(x);
            i++;
            j--;
        }
        sort(ans.begin(),ans.end());
        return ans[0];
    }
};