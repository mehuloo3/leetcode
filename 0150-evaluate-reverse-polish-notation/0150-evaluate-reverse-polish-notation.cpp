class Solution {
public:
    int evalRPN(vector<string>& tokens) {
       stack<int>st;
        
        for(int i=0;i<tokens.size();i++)
        {
        if(tokens[i]=="+" or tokens[i]=="-" or tokens[i]=="*" or tokens[i]=="/")
        {
            int f,s;
            int store;
            
            f=st.top();
            st.pop();
            s=st.top();
            st.pop();
            
            if(tokens[i]=="*") store=f*s;
            else if(tokens[i]=="/") store=s/f;
            else if(tokens[i]=="-") store=s-f;
            else store=f+s;
            
            st.push(store);
            
        }
            else
            {
                st.push(stoi(tokens[i]));
            }
        }
        return st.top();
    }
};