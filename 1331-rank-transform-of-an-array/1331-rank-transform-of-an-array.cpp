class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
//         vector<int>Copy;
//         Copy=arr;
//         sort(Copy.begin(),Copy.end());
//         int n=Copy.size();
        
//         map<int,int>ranks;       
//         int rank=1;
//         for(int i=0;i<n;i++)
//         {
//             int x=Copy[i];
//             if(ranks[x]==0)
//             {
//                 ranks[x]=rank;
//                 rank++;
//             }
//         }
//     for(int i=0;i<n;i++) 
//     { 
//         int x = arr[i]; 
//         arr[i]=ranks[arr[i]]; 
//     } 
//         return arr;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        vector<int>c;
        c=arr;
        sort(c.begin(),c.end());
        map<int,int>mp;
        int rank=1;
        for(int i=0;i<c.size();i++)
        {
            int x=c[i];
            if(mp[x]==0)
            {
                mp[x]=rank;
                rank++;
            }
        }
           for(int i=0;i<c.size();i++)
        {
          int x=arr[i];
          arr[i]=mp[arr[i]];
                
            }
        return arr;
    }
};