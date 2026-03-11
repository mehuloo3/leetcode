class Solution {
public:
string DectoBin(int n)
    {
        string s="";
        if(n==0)
        {
            return "0";
        }
        while(n!=0)
        {
          int dig=n%2;
          s+=dig+'0';
          n=n/2;
        } 
        reverse(s.begin(),s.end());
        return s;   
    }
int BintoDec(string str) {
    int res = 0;
    int p = 1; 
    for (int i = str.length() - 1; i >= 0; i--) {
        if (str[i] == '1') {
            res += p;
        }
        p *= 2; 
    }
    return res;
    
}
    int bitwiseComplement(int n) {
       string s=DectoBin(n);
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='0')
        {
            s[i]='1';
        }else
        {
            s[i]='0';
        }
    }
        return BintoDec(s);
    }
};