class Solution {
public:
    bool isAnagram(string s, string t) {   
        if(s.size()!=t.size()) return false;
        unordered_map<char,int>m1,m2;
        for(auto i:s)
        {
            m1[i]++;
         
        }
         for(auto i:t)
        {
            m2[i]++;
         
        }
        
        for(auto i:s)
        {
            if(m1[i]!=m2[i])
            {
                return false;
            }
        }
        return true;
    }
    vector<string> removeAnagrams(vector<string>& words) {
        
        vector<string>ans;
        ans.push_back(words[0]);
        for(int i=1;i<words.size();i++)
        {
            string s1=words[i-1];
            string s2=words[i];
        
                sort(s1.begin(),s1.end());
                sort(s2.begin(),s2.end());
             if(s1!=s2)
            {
                ans.push_back(words[i]);
            }
        }
        return ans;
    }
};