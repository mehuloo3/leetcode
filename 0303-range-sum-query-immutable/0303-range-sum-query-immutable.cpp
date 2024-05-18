class NumArray {
public:
     vector<int>m;;
    NumArray(vector<int>& nums) {
        // this->m=nums;
        // for(int i=0;i<nums.size();i++)
        // {
        //     nums.push_back(m[i]);
        // }
        // for(int i=0;i<nums.size();i++)
        // {
        //     nums[i]=m[i-1]+nums[i];
        // }
         this->m=nums;
    }
    
    int sumRange(int left, int right) {
        long long sum=0;
   for(int i=left;i<=right;i++)
   {
       sum+=m[i];
   }
    return sum;   
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */