class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
     int n=s.size();
     int k=p.size();
     vector<int>ans;
     if(n<k)
     {
        return ans;
     }
     vector<int>cnt1(26,0);
     for(auto i:p)
     {
        cnt1[i-'a']++;
     }
     for(int i=0;i<n-k+1;i++)
     {
         vector<int>cnt2(26,0);
         for(int j=i;j<k+i;j++)
         {
             cnt2[s[j]-'a']++;
         }
         if(cnt1==cnt2)
         {
             ans.push_back(i);
         }
     }
     return ans;
    }
};