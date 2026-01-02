class Solution {
public:
    string winningPlayer(int x, int y) {
        int rd=min(x,y/4);
        if(rd%2==1)
        {
            return "Alice";
        }else
        {
            return "Bob";
        }
    }
};