class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>c;
        c=arr;
        sort(c.begin(),c.end());
        int N=c.size();
        map<int,int> ranks;
        int rank = 1; 
 
    for(int i = 0; i < N; i++)
    { 
 
        int element = c[i]; 
 
        if (ranks[element] == 0) 
        { 
            ranks[element] = rank; 
            rank++; 
        } 
    }  
    for(int i = 0; i < N; i++) 
    { 
        int element = arr[i]; 
        arr[i] = ranks[arr[i]]; 
    } 
        return arr;
    }
};