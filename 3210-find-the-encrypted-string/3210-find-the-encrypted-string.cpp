class Solution {
public:
    string getEncryptedString(string s, int k) {
        int n=s.size();
        string str;
        for(int i=0;i<n;i++)
        {
           str.push_back(s[(i+k)%n]);
        }
        return str;
    }
};