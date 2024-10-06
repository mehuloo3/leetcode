class Solution {
public:
    long long minimumRemoval(vector<int>& beans) {
       
        int n=beans.size();
        sort(beans.begin(),beans.end());
        long long total=0;
        for(int i=0;i<n;i++)
        {
            total+=beans[i];
        }
        long long res=total;
        long long  empty=0;
        
        for(long long i=0;i<n;i++)
        {
            empty=total-(n-i)*beans[i];
            res=min(empty,res);
        }
        return res;
    }
};