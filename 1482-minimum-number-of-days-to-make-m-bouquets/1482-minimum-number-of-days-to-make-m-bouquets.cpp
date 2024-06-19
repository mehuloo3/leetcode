class Solution {
public:
    bool posible(vector<int> &arr,int day,int m,int k)
    {
        int cnt=0,NumberOfday=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]<=day)
            {
                cnt++;
            }
            else
            {
                NumberOfday+=(cnt/k);
                cnt=0;
            }
        }
        NumberOfday+=(cnt/k);
        if(NumberOfday>=m)
            return true;
        else
            return false;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
    long long val = m*1ll*k*1ll;
    int n = bloomDay.size(); 
    if (val > n) return -1; 
    int mini = INT_MAX, maxi = INT_MIN;
    for(int i= 0;i<n;i++)
    {
        mini = min(mini,bloomDay[i]);
        maxi = max(maxi,bloomDay[i]);
    }
         int start=mini,end=maxi;
        while(start<=end) 
        {
        int mid= start+(end-start)/2;
        if (posible(bloomDay,mid,m,k))
        {
            end=mid-1;
        }
        else start=mid+1;
    }
    return start;
    }
};