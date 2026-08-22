class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int prod=1;
        int p=n;
        if(n==0)
        {
            return 0;
        }
        while(p>0)
        {
            int x=p%10;
            sum+=x;
            prod=prod*x;
            p=p/10;
        }
        if(n%(sum+prod)==0)
        {
            return true;
        }
        return false;
    }
};