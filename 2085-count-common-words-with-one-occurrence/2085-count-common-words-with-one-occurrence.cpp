class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string,int>mp1;
        unordered_map<string,int>mp2;
        for(auto str:words1)
        {
            mp1[str]++;
        }
        for(auto str:words2)
        {
            mp2[str]++;
        }
     int ans=0;
//          for(auto s1:words1)
//         {
//               for(auto s2:words2)
//               {
//                   if(mp1[s1]==1 and mp2[s2]==1)
//                   {
//                       cnt++;
//                   }
//                   return cnt;
//               }
//         }
        
//         return 0;
        
        unordered_map<string,int>fi;
        for(auto ch:mp1){
            if(ch.second==1){
                fi[ch.first]++;
            }
        }
        for(auto ch:mp2){
            if(ch.second==1){
                fi[ch.first]++;
            }
        }
        for(auto ch: fi){
            if(ch.second==2){
                ans++;
            }
        }
        return ans;
    }
};