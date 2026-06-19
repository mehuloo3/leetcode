class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        //first
       int n=gain.size();
    //    vector<int>arr(n+1,0);
    //    for(int i=0;i<n;i++)
    //    {
    //       arr[i+1]=gain[i];
    //    }
    //    for(int i=1;i<arr.size();i++)
    //    {
    //     arr[i]=arr[i-1]+arr[i];
    //    }
    //   return *max_element(arr.begin(),arr.end());

      //second
      int sum=0;
      int maxi=0;
      for(int i=0;i<n;i++)
      {
        sum+=gain[i];
        maxi=max(sum,maxi);
      }
      return maxi;
    }
};