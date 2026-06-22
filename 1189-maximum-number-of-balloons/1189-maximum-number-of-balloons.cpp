class Solution {
public:
 int maxi(string s) {
       unordered_map<char,int>mp,mp2;
        for(char ch:s)mp[ch]++;
        int ans=INT_MAX;
        string target="balloon";
        for(char ch:target){
           mp2[ch]++;
        }
        for(auto&it:mp2){
            char ch=it.first;
            int ct=it.second;
            if(mp.find(ch)==mp.end() || mp[ch]<ct)return 0; 
            else ans=min(ans,mp[ch]/ct);
        }
        return ans; 
    }
    int maxNumberOfBalloons(string text) {
    //    unordered_map<char,int>mp;
    //    for(auto i:text)
    //    {
    //     mp[i]++;
    //    }
    //    int ans;
    //    string str="";
    //    vector<string>v,v1;
    //    for(auto i:mp)
    //    {
    //    v.push_back(i.first);
    //    v1.push_back(i.second);
    //    }
    //    if(auto i:v)
    //    {
    //     if(i=='b' && i=='l' && i=='o' && i=='a' && i=='n')
    //     {
    //         if(i=='b')
    //         {
                
    //         }
    //     }
    //    }
    // //    if(str=="balon"){
    // //    return v[0;}
    // //    return 0;
    // return ans/2;

     return maxi(text);
    }
};