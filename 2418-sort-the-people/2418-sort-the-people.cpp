class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int,string>mp;
       for(int i=0;i<names.size();i++)
       {
           mp[heights[i]]=names[i];
       }
        sort(heights.begin(),heights.end());
        vector<string>res(heights.size());
        int j=0;
        for(int i=heights.size()-1;i>=0;i--)
        {
            res[j]=mp[heights[i]];
            j++;
        }
return res;
    }
};