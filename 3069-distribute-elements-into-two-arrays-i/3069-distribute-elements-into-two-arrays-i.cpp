class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        
        vector<int>arr1,arr2;
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);
        int p=2;
        while(p<nums.size()){
        if(arr1[arr1.size()-1]>arr2[arr2.size()-1])
        {
         arr1.push_back(nums[p]);
        }else
        {
            arr2.push_back(nums[p]);
        }
        p++;
        }
        vector<int>ans;
        for(auto i:arr1)
        {
            ans.push_back(i);
        }
        for(auto i:arr2)
        {
            ans.push_back(i);
        }
        return ans;
    }
};