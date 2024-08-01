class Solution {
public:
    int countSeniors(vector<string>& details) {
        int res=0;
        for(auto i :details)
        {
            int str=stoi(i.substr(11,2));
                res+=str>60;
        }
       return res; 
    }
};