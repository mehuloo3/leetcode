class Solution {
public:
    int minAddToMakeValid(string s) {
      stack<char>st;
     for(auto i:s)
     {
         //if first start ( then check next if ) then pop both
         if(!st.empty() and (st.top()=='(' and i==')'))
         {
             st.pop();
         }
         else
         {
      //remain push
          st.push(i);
         }
     }
         return st.size(); 
    }
         
};