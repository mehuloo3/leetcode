class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int n=pref.size();
        vector<int>prefix(n);
        prefix[0]=pref[0];
        for(int i=1;i<n;i++)
        {
            prefix[i]=pref[i]^pref[i-1];
        }
        return prefix;
    }
};