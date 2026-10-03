class Solution {
public:
    bool isValid(string s) {
      stack<int>st;
      for(auto i:s)
      {
        if(i=='(' || i=='{' || i=='['){
        st.push(i);}
      
      else
      {
        if(st.empty())
        {
            return 0;
        }
        char ch=st.top();
        st.pop();
        if((i == ')' and ch == '(') or  (i == ']' and ch == '[') or (i == '}' and ch == '{'))
        {
            continue;
        }
        return false;
      }
      }
      return st.empty();
    }
};