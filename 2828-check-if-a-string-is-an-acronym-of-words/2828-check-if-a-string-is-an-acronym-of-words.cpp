class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
//         vector<string>ans;
//         string res="";
//         for(int i=0;i<words.size();i++)
//         {
//             string x=words[i];
//             for(int j=0;i<x.size();j++)
//             {
//                 res+=ans[0];
//                 break;
//             }
            
//         }
//         if(res==s) return true;
//         return false;
        
     string res="";
     for(int i=0;i<words.size();i++)
     {
         string x=words[i];
          for(int j=0;j<x.size();j++)
          {
              res+=x[0];
              break;
          }
     }
     // cout<<res;
        if(res==s) return true;
        else
        return false;
    }
};