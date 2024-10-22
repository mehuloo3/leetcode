class Solution {
public:
    bool isValid(string str) {
       
        // stack<char>st;
        // for(auto i:str){
        // if(i=='(' || i=='{' || i=='[')
        // {
        //     st.push(i);
        // }
        // else
        // {
        //     if(st.empty())
        //     {
        //         return false;
        //     }
        //     char ch=st.top();
        //     st.pop();
        //    if((i == ')' and ch == '(') or  (i == ']' and ch == '[') or (i == '}' and ch == '{'))
        //     {
        //         continue;
        //     }
        //     else
        //         return false;
        // }
        // }
        // return st.empty();
        
        // other
       
        // stack<char>st;
        // for(int i=0;i<str.size();i++)
        // {
        //     if(str[i]=='(')
        //     {
        //         st.push(str[i]);
        //     }
        //     else
        //     {
        //         if(st.empty())
        //              return 0;
        //         st.pop();
        //     }
        // }
        // return st.empty();
        
        stack<int>st;
        
        for(auto i:str)
        {
            if(i=='(' || i=='{' || i=='[')
            {
                st.push(i);
            }
            else
            {
                if(st.empty())
                {
                    return 0;
                }
                else if(i==')')
                {
                    if(st.top()!='(')
                    {
                        return 0;
                    }
                    else
                    {
                        st.pop();
                    }
                }
                else if(i=='}')
                {
                    if(st.top()!='{')
                    {
                        return 0;
                    }
                    else
                    {
                        st.pop();
                    }
                }
                else
                {
                    if(st.top()!='[')
                    {
                        return 0;
                    }
                    else
                    {
                        st.pop();
                    }
                }
            }
        }
        return st.empty();
    }
};