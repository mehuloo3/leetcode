class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n=s.size();
        vector<string>str(n);
        // string st[n];
        for(int i=0;i<n;i++)
        {
            str[indices[i]]=s[i];
        }
        string x;
        for(int i=0;i<str.size();i++)
        {
            x+=str[i];
        }
        return x;
    }
};