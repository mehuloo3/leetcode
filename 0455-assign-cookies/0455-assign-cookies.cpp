class Solution {
public:
void sorted(vector<int>&arr)
    {
        for(int i=0;i<arr.size();i++)
        {
        int key=arr[i];
            int j=i-1;
            
            while(j>=0 and key<=arr[j])
            {
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=key;
        }
    }
    int findContentChildren(vector<int>& g, vector<int>& s) {
        // sorted(g);
        // sorted(s);
    sort(g.begin(),g.end());
    sort(s.begin(),s.end());
        int i=0,j=0;
        int cnt=0;
        while(i<g.size() and j<s.size())
        {
            if(g[i]<=s[j])
            {
                cnt++;
                i++;
                j++;
            }
            else if(g[i]>s[j])
            {
                j++;
            }
        }
      return cnt;
    }
};