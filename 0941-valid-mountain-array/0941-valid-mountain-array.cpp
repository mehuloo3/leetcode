class Solution {
public:
    bool left(vector<int>& arr,int mid)
    {
        for(int i=1;i<=mid;i++)
        {
            if(arr[i]<=arr[i-1]) return false;
        }
        return true;
    }
    bool right(vector<int>& arr,int mid,int n)
    {
        for(int i=mid+1;i<n;i++)
        {
            if(arr[i]>=arr[i-1]) return false;
        }
        return true;
    }
    bool validMountainArray(vector<int>& arr) {
       int n=arr.size();
        int mid=0;
        for(int i=1;i<n-1;i++)
        {
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
            {
                mid=i;
                break;
            }
        }
        
        if(mid==0) return false;
        
        int a=left(arr,mid);
        int b=right(arr,mid,n);
        
        return a&&b;
    }
};