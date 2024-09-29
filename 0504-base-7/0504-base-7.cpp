class Solution {
public:
    string convertToBase7(int num) {
    
        string res="";
        int nm=abs(num);
        if(nm==0) return "0";
        while(nm)
        {
            res+=to_string(nm%7);
            nm=nm/7;
        }
        if(num<0) res+="-";
        reverse(res.begin(),res.end());  
        return res;
        }
};