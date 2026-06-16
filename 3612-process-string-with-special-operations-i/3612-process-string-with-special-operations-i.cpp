class Solution {
public:
    string reverse(string s)
    {
      string str="";
      for(int i=s.size()-1;i>=0;i--)
      {
        str+=s[i];
      }
      return str;
    }
    string duplicate(string s)
    {
       return s+""+s;
    }
    string removes(string s)
    {
        string str="";
      for(int i=0;i<s.size()-1;i++)
      {
        str+=s[i];
      }
      return str;
    }
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