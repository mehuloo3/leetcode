class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        int n=arr.size();
        vector<int>fre(k,0);
        for(auto i:arr)
        {
            int x=(i%k+k)%k;
            fre[x]++;
        }
        if(fre[0]%2!=0)
            return false;
        for(int i=1;i<=k/2;i++)
        {
            if(fre[i]!=fre[k-i])
            {
                return false;
            }
        }
            return true;
    }
};