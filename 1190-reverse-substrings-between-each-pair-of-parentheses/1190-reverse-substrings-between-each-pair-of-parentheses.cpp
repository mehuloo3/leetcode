class Solution {
public:
    void reverse(string &str,int i,int j)
    {
         while (i<j)
         {
        swap(str[i++],str[j--]);
         }
    }
    string reverseParentheses(string s) {
    stack<int>v; 
    int n=s.size();
    for (int i=0;i<n;i++)
    {
        if(s[i]=='(')
        {
            v.push(i);
        } 
        else if(s[i]==')')
        {
            reverse(s,v.top()+1,i-1); 
            v.pop();    
        }
    }
    string res;
    for (auto ch:s)
    {
        if (isalpha(ch)) {
            res += ch; 
        }
    }
    return res;
    }
};
    
