class Solution {
public:
    string removeStars(string s) {
     stack<char>st;
     for(auto i:s)
     {
        if(i!='*')
        {
            st.push(i);
        }else if(!st.empty() && i=='*')
        {
            st.pop();
        }
     }
     string x="";
     while(!st.empty())
     {
        x+=st.top();
        st.pop();
     }   
     reverse(x.begin(),x.end());
     return x;
    }
};