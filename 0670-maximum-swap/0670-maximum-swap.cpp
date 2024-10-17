class Solution {
public:
    int maximumSwap(int num) {
        string s=to_string(num);
        int n=s.size();
        vector<int>Indx(n);
        Indx[n-1]=n-1;
        for (int i=n-2;i>=0;i--)
        {
            if(s[i]>s[Indx[i+1]])
            {
                Indx[i]=i;
            } 
            else
            {
                Indx[i]=Indx[i+1];
            }
        }
        
        for (int i=0;i<n;i++)
        {
            if (s[i]!=s[Indx[i]]) {
                swap(s[i], s[Indx[i]]);
                break;
            }
        }
        
        return stoi(s);
    }
};