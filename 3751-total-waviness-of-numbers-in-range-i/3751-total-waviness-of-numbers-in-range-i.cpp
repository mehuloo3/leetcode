class Solution {
public:
    int wavi(int n)
    {
        string s=to_string(n);
        int c=0;
        int m=s.size();
        //base
        if(m<3)
        {
            return 0;
        }
        for(int i=1;i<m-1;i++)
        {
            if(s[i]>s[i-1] && s[i]>s[i+1])
            {
                c++;
            }else if(s[i]<s[i-1] && s[i]<s[i+1])
            {
                c++;
            }
        }
        return c;
    }
    int totalWaviness(int num1, int num2) {
        int ans=0;
        int n=max(num1,100);
        for(int i=n;i<=num2;i++)
        {
            ans+=wavi(i);
        }
        return ans;
    }
};