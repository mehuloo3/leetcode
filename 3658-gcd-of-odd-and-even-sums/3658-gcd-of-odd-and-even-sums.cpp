class Solution {
public:
    // int gdc(int a,int b)
    // {
    //     if(a==0)
    //     {
    //         return b;
    //     }
    //     if(b==0)
    //     {
    //         return a;
    //     }
    //     if(a==b)
    //     {
    //         return a;
    //     }
    //     return gdc(b,a%b);
    // }
    int gcdOfOddEvenSums(int n) {
        int x=2;
        int y=1;
        int sumOdd=0,sumEven=0;
        int a=n;
        while(a!=0)
        {
           sumOdd+=y;
           y+=2;
           a--;
        }
        int b=n;
        while(b!=0)
        {
           sumEven+=x;
           x+=2;
           b--;
        }

        return gcd(sumOdd,sumEven);
    }
};