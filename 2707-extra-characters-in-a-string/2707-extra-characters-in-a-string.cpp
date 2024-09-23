class Solution {
public:
    int minExtraChar(string s, vector<string>& dictionary) {
//         unordered_map<char,int>map;
//         for(auto ch:dictionary)
//         {
//             for(auto j:ch)
//             {
//              map[j]++;
//             }
//         }
//         int cnt=0;
//         for(auto i:s){
//                 if(map[i]==0)
//                 {
//                     cnt++;
//                 }
//         }
        
//         return cnt;
        
        
        
        unordered_set<string> dict(dictionary.begin(),dictionary.end());
        int n=s.size();
        
        vector<int>DP(n+1,n);
        DP[0]=0;
        
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<i;j++)
            {
                string ans=s.substr(j,i-j);
                if(dict.find(ans) != dict.end())
                {
                    DP[i]=min(DP[i],DP[j]);
                }
            }
            DP[i]=min(DP[i],DP[i-1]+1);
        }
        
        return DP[n];
    }
};