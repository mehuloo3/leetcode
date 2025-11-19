class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n=arr.size();
        bool f=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i!=j)
                {
                    if(arr[i]==2*arr[j])
                    {
                        f=1;
                        return true;
                    }
                }
            }
        }
        return false;
    }
};