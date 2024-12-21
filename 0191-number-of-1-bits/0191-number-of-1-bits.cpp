class Solution {
public:
    string binary(int n)
    {
        string str="";
        while(n!=0)
        {
            int res=n%2;
            str+=to_string(res);
            n=n/2;
        }
        reverse(str.begin(),str.end());
        return str;
    }
    int hammingWeight(int n) {
        int cnt=0;
        string x=binary(n);
        for(int i=0;i<x.size();i++)
        {
            if(x[i]=='1')
            {
                cnt++;
            }
        }
        return cnt;
    }
};