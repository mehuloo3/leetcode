class Solution {
public:
    int mul(int n)
    {
        int ans=1;
        while(n!=0)
        {
            int x=n%10;
            ans=ans*x;
            n=n/10;
        }
        return ans;
    }
    int smallestNumber(int n, int t) {
        while(true)
        {
            if(mul(n)%t==0){
                return n;
            }
            n++;
        }
        
    }
};