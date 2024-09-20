class Solution {
public:
    bool isValid(string str) {
       
        stack<char>st;
        for(auto i:str){
        if(i=='(' || i=='{' || i=='[')
        {
            st.push(i);
        }
        else
        {
            if(st.empty())
            {
                return false;
            }
            char ch=st.top();
            st.pop();
           if((i == ')' and ch == '(') or  (i == ']' and ch == '[') or (i == '}' and ch == '{'))
            {
                continue;
            }
            else
                return false;
        }
        }
        return st.empty();
    }
};