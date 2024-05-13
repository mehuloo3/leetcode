class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    //   if (strs.empty()) return "";
    //  int n=strs.size();
    //  string a=strs[0],b=strs[n-1],ans="";
    //  for(int i=0;i<n;i++)
    //  {
    //     if(a[i]==b[i])
    //     {
    //         ans+=a[i];
    //     }
    //     else break;
    //  }
    //  return ans;

    if (strs.empty()) return "";
        
        int n = strs.size();
        string a = strs[0];
        string ans = "";
        
        for (int i = 0; i < a.size(); i++) {
            for (int j = 1; j < n; j++) {
                if (i >= strs[j].size() || a[i] != strs[j][i]) {
                    return ans;
                }
            }
            ans += a[i];
        }
        
        return ans;
    }
};