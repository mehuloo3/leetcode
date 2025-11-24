class Solution {
public:
    int bin(string m)
    {
        int n=stoi(m);
        int base=1;
        int dec=0;
        while(n>0)
        {
            int last=n%10;
            n=n/10;
            dec+=last*base;
            base*=2;
        }
        return dec;
    }
    vector<bool> prefixesDivBy5(vector<int>& nums) {
            int dec=0;
            vector<bool>vec;
            for(int i=0;i<nums.size();i++)
            {
                dec=(dec*2+nums[i])%5;
                vec.push_back(dec==0);
            }  
            return vec;
     
    }
};