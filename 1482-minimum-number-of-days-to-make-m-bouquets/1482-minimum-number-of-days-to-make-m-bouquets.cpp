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
        // int start=0;
        // int end=bloomDay.size()-1;
        // while(start<=end)
        // {
        //     int mid=start+(end-start)/2;
        //     if(bloomDay)
        // }
    long long val = m * 1ll * k * 1ll;
    int n = bloomDay.size(); //size of the array
    if (val > n) return -1; //impossible case.
    //find maximum and minimum:
    int mini = INT_MAX, maxi = INT_MIN;
    for (int i = 0; i < n; i++) {
        mini = min(mini,bloomDay[i]);
        maxi = max(maxi,bloomDay[i]);
    }
         int low = mini, high = maxi;
        while (low <= high) {
        int mid = (low + high) / 2;
        if (posible(bloomDay, mid, m, k)) {
            high = mid - 1;
        }
        else low = mid + 1;
    }
    return low;
        // for(int i=0;i<=bloomDay.size();i++)
        // {
        //     if(posible(bloomDay,i,m,k)==true)
        //     {
        //         return i;
        //     }
        // }
        // return -1;
        
    }
};