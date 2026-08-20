class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
      int sum=0;
      int n=arr.size();
      int ans=0;
       for(int i=0;i<n;i++)
       {
        vector<int>ans;
        for(int j=i;j<n;j++)
        {
        int len=(j-i+1);
        int curr=0;
        if(len%2==1)
        {
            for(int k=i;k<=j;k++)
            {
                curr+=arr[k];
            }
           sum+=curr; 
        }
        }
       } 
       return sum;
    }
};