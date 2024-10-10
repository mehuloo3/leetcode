class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int>ans;
        int n=s.size();
        int i=0;
        int j=n;
        for(int x=0;x<n;x++)
        {
        if(s[x]=='I')
            {
                   ans.push_back(i);
                   i++;
            }
         else 
            {
                    ans.push_back(j);
                    j--;
            }
         }
        if(s[n-1]=='I')
        {
            ans.push_back(i);
        }
        else
        {
            ans.push_back(j);
        }
        return ans;
    }
};