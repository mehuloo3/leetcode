class Solution {
public:
    string binary(int n)
    {
        string str="";
        while(n!=0)
        {
            int x=n%2;
            str+=x+'0';
            n=n/2;
        }
        reverse(str.begin(),str.end());
        return str;
    }
    bool hasAlternatingBits(int n) {
        string p=binary(n);
        for(int i=1;i<p.size();i++)
        {
            if(p[i-1]==p[i]) return false;
        }
        return true;
    }
};