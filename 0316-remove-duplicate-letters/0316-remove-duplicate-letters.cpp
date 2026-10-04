class Solution {
public:
    string removeDuplicateLetters(string s) {
        stack<char>st;
        vector<int>arr(26,0);
        vector<bool>seen(26,false);
        for(int i=0;i<s.size();i++)
        {
            arr[s[i]-'a']=i;
        }
        for(int i=0;i<s.size();i++)
        {
            int curr=s[i]-'a';
            if(seen[curr]) continue;
            while(!st.empty() && st.top()>s[i] && i<arr[st.top()-'a'])
            {
                seen[st.top()-'a']=false;
                st.pop();
            }
            st.push(s[i]);
            seen[curr]=true;
        }
        string str="";
        while(!st.empty())
        {
            str+=st.top();
            st.pop();
        }
     reverse(str.begin(),str.end());
     return str;   
    }
};