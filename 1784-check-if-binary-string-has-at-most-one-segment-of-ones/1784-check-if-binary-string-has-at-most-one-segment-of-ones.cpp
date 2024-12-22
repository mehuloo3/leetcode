class Solution {
public:
    bool checkOnesSegment(string s) {
      if(s.size()==1) return true;
      for(int i=0;i<s.size()-1;i++)
      {
          if(s[i]=='0' and s[i+1]=='1')
          {
              return false;
          }
      }
        return true;
    }
};