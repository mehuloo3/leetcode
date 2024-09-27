class Solution {
public:
    
    bool check(int n)
    {

        int num=n;
        while(num)
        {
            int dig=num%10;
            if(dig==0 || n%dig!=0) return false;
            num=num/10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        
        vector<int>ans;
        for(int i=left;i<=right;i++)
        {
            if(check(i)){
                    ans.push_back(i);}
            
        }
        return ans ;
    }
};