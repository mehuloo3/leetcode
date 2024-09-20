class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        
        
        int cnt=0;
        for(auto i:commands)
        {
            if(i=="DOWN")
            {
                cnt=cnt+n;
            }
            else if(i=="UP") 
            {
                cnt=cnt-n;
            }
            else if(i=="LEFT")
            {
                cnt=cnt-1;
            }
            else if(i=="RIGHT")
            {
                cnt=cnt+1;
            }
        }
        return cnt;
    }
};