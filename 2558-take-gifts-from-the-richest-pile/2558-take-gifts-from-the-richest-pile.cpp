class Solution {
public:
//for sqrt manualy
//     long long sqrtNum(int n)
//     {
//         int start=1,end=n/2;
//         int ans;
//         if(n==0 || n==1) return n;
//         while(start<=end)
//         {
//             int mid=start+(end-start)/2;
//             long long x=mid*mid;
//             if(x==n) return mid;
            
//             if(x<=n)
//             {
//                 start=mid+1;
//                 ans=mid;
//             }
//             else
//             {
//                 end=mid-1;
//             }
//         }
//         return ans;
//     }
    long long pickGifts(vector<int>& gifts, int k) {
        
        long long int ans=0;
        priority_queue<int>Q;
        int n=gifts.size();
        for(auto i:gifts)
        {
            Q.push(i);
        }
        int a;
        while(k--)
        {
            a=Q.top();
            Q.pop();
            Q.push(sqrt(a));
        }
        while(!Q.empty())
        {
            ans+=Q.top();
            Q.pop();
        }
        return ans;
    }
};