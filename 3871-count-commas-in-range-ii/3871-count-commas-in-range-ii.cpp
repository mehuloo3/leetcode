class Solution {
public:
    long long countCommas(long long n) {
        long long prod=1000,res=0;
        while(prod<=n)
        {
            res+=(n-prod+1);
            prod*=1000;
        }
        return res;
    }
};