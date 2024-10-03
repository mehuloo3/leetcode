class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int>ans;
        int res=0;
        for(int i=0;i<n;i++)
        {
            int x=start+2*i;
            ans.push_back(x);
        }
        for(int i=0;i<ans.size();i++)
        {
            res^=ans[i];
        }
       return res;
    }
};