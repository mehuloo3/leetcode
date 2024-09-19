class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
      
        
        // int n=people.size();
        sort(people.begin(),people.end());
        int start=0;
        int end=people.size()-1;
        int result=0;
        while(start<=end)
        {
            if(people[start]+people[end]<=limit)
            {
                start++;
            }
            result++;
            end--;
        }
        
        return result;  
    }
};