class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
    int i=0;
    int j=nums.size()-1;
    string x="";
    long long s=0;
    while(i<=j)
    {
        if(i==j){s+=nums[i];}
        else{
        x=to_string(nums[i])+""+to_string(nums[j]);
        s=s+stoi(x);
        }
        i++;
        j--;
        
    }
    // cout<<s;
        return s;
    }
};