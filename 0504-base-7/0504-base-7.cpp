class Solution {
public:
    string convertToBase7(int num) {
        if (num==0) return "0";
        int x=abs(num);
        string res="";
        string r="";
        while(x)
        {
            res+=to_string(x%7);
            x=x/7;
        }
        if(num<0) res+="-";
        for(int i=res.size()-1;i>=0;i--)
        {
            r+=res[i];
        }
        return r;
        }
};