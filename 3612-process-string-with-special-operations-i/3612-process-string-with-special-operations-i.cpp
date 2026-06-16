class Solution {
public:
    string processStr(string s) {
        string str="";
        for(auto i:s)
        {
            if(i>='a' && i<='z'){
            str.push_back(i);
            }
            else if(i=='*' && !str.empty())
            {
                str.pop_back();
            }else if(i=='#')
            {
                str+=str;
            }else
            {
                ::reverse(str.begin(),str.end());
            }
        }
        return str;
    }
};