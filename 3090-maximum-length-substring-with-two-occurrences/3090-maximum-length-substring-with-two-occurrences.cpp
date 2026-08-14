class Solution {
public:
    int maximumLengthSubstring(string s) {
        
        int n=s.size();
        int ans=INT_MIN;

        for(int i=0;i<n;i++)
        {
            int arr[26]={};
            for(int j=i;j<n;j++)
            {
              int x=s[j]-'a';
              arr[x]++;
              if(arr[x]>2)
              {
                break;
              }
              ans=max(ans,j-i+1);
            }
        }
        return ans;
    }
};