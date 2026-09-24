class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n=nums.size();
        int mini=INT_MAX;
        int p=-1;
        int c=0;
        for(int i=0;i<n;i++)
        {
            int x=nums[i];
            int sum=0;
            while(x!=0)
            {
                int y=x%10;
                sum+=y;
                x=x/10;
            }
            if(i==sum)
            {
                mini=min(i,mini);
                c++;
            }
        }
        if(c==0)
        {
            return -1;
        }
        return mini;
    }
};