class Solution {
public:
string frequencySort(string s) {
unordered_map<char,int>mp;
for(int i=0;i<s.size();i++)
{
    mp[s[i]]++;
}
vector<pair<char,int>>p(mp.begin(),mp.end());
    
sort(p.begin(),p.end(), [](const auto &a, const auto &b) {return a.second > b.second;});
    
string res;       
for(auto i:p)
{
    res+=string(i.second,i.first);
}
return res;
          
    }
};