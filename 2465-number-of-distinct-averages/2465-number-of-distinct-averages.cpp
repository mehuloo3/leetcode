class Solution {
public:
    int distinctAverages(vector<int>& nums) {
       int n=nums.size();
        sort(nums.begin(),nums.end());
       int i=0,j=nums.size()-1;
       // vector<double>ans;
        set<double>ans;
        while(i<j)
        {
            double diff=(double)(nums[j]+nums[i])/2;
            ans.insert(diff);
            i++;
            j--;
        }
        // ans.erase(unique(ans.begin(),ans.end()),ans.end());
        return  ans.size();
    }
};