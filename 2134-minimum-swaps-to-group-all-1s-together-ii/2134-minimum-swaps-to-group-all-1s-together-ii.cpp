class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int m=INT_MAX;
        int i=0;
        int j=0,countone=0,count=0;
        for (int i=0;i<nums.size();i++)
        {
            if (nums[i]==1)
            {
                countone += nums[i];
            }
        }
        if (countone==0)
        {
             return 0;
        }
        nums.insert(nums.end(), nums.begin(), nums.end());
        while(j<nums.size())
        { 
             if (nums[j]==0)
             {
                 count =count+1;
             }
            if (j-i+1<countone)
            {
                j++;
            }
            else if(j-i+1==countone)
            {
                 if (count<=m)
                 {
                      m = count;
                 }
                if (nums[i]==0)
                {
                     count = count-1;
                }
                i++;
                j++;
            }
        }
        return m;
        
    }
};