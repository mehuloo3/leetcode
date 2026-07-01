class Solution {
public:
    int maxCoins(vector<int>& piles) {
        //1 2 2 4 7 8
        sort(piles.begin(),piles.end());
        int res=0;
        int n=piles.size();
        for(int i=n/3;i<n;i+=2)
        {
            res+=piles[i];
        }
        return res;
    }
};