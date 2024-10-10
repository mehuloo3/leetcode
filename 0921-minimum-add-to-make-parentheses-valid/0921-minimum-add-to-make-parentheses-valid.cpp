class Solution {
public:
    int minAddToMakeValid(string s) {
      stack<char>st;
     for(auto i:s)
     {
         if(!st.empty() and (st.top()=='(' and i==')') )
         {
             st.pop();
         }
         else
         {
             st.push(i);
         }
     }
        return st.size();
    }
};