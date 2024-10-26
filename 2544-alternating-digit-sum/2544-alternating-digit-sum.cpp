class Solution {
public:
    int alternateDigitSum(int n) {
    // int n =521;
    int sum1=0,sum2=0;
    string x=to_string(n);
    vector<int>a;
    vector<int>b;
    for(int i=0;i<x.size();i+=2)
    {
       a.push_back(x[i]-'0');
    }
     for(int i=1;i<x.size();i+=2)
    {
       b.push_back(x[i]-'0');
    }
    for(int i=0;i<a.size();i++)
    {
        sum1+=a[i];
    }
     for(int i=0;i<b.size();i++)
    {
        sum2+=(-b[i]);
    }
    // cout<<sum1<<" "<<sum2<<endl;
    // cout<<sum1+sum2;
        return sum1+sum2;
    }
};