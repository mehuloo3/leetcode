class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int>mp;
        vector<int>v;
        for(auto i:arr)
        {
            mp[i]++;
        }
        set<int>st,s1;
        for(auto i:arr)
        {
            st.insert(i);
        }
        for(auto j:mp)
        {
            v.push_back(j.second);
        }
        for(auto i:v)
        {
            s1.insert(i);
        }
        if(st.size()==s1.size())
        {
            return true;
        }
        return false;
    }
};