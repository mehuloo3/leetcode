
 bool compare(int a,int b)
    {
       return to_string(a)+to_string(b)>to_string(b)+to_string(a);
    }
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        string res="";
        sort(nums.begin(),nums.end(),compare);
        for(auto i:nums)
        {
            res+=to_string(i);
        }
        if(res[0]=='0') return "0";
        
        return res;
    }
};