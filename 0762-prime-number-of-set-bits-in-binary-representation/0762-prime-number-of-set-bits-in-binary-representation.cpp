class Solution {
public:
    bool prime(int n)
    {
        if(n<2){ return 0;}
        else {
        for(int i=2;i<=n/2;i++)
        {
            if(n%i==0) return 0;
        }
        }
        return 1;
    }
    string binary(int n)
    {
        string str="";
        while(n!=0)
        {
            int p=n%2;
            str+=p+'0';
            n=n/2;
        }
        reverse(str.begin(),str.end());
        return str;
    }
    int countPrimeSetBits(int left, int right) {
    int cnt=0,c=0;
     for(int i=left;i<=right;i++)
     {
         string x=binary(i);
         int p=0;
         for(int j=0;j<x.length();j++)
         {
             
             if(x[j]=='1')
             {
                 p++;
             }
         }
          if(prime(p))
             {
                 c++;
             }
         
     }
        return c;
    }
};