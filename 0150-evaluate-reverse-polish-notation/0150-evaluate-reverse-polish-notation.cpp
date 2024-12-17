class Solution {
public:
    int evalRPN(vector<string>& tokens) {
       stack<int>st;
        for(auto i:tokens)
        {
            if(i=="+" || i=="-" || i=="*" || i=="/")
            {
                int a,b,c;
                a=st.top();
                st.pop();
                b=st.top();
                st.pop();
                
                if(i=="+") c=a+b;
                else if(i=="-") c=b-a;
                else if(i=="*") c=a*b;
                else c=b/a;
                
                st.push(c);
            }
            else
            {
                st.push(stoi(i));
            }
        }
        return st.top();
    }
};