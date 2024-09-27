class Solution {
public:
    int arrangeCoins(int n) {
  
    int start=1;
    int end=n;
    int ans=0;
    while(start<=end)
    {
        long int mid = start + (end-start)/2;
        long int k = mid*(mid+1)/2;
        
        if(k == n){
            return mid;
        }
        else if (k > n){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return end;
    }
};