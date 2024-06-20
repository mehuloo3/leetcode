class Solution {
public:
    bool search(vector<int> &position,int mindist,int m)
    {
        int prev=position[0];
        int cnt=1;
        for(int i=1;i<position.size();i++)
        {
            int current=position[i];
            if(current-prev>=mindist)
            {
                prev=current;
                cnt++;
            }
        }
        return cnt>=m;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int start=1;
        int end=position.back();
        while(start<end)
        {
            int mid=(start+end+1)/2;
            if(search(position,mid,m))
            {
                start=mid;}
                else{
                end=mid-1;
            }
        }
        return start;
            
    }
};