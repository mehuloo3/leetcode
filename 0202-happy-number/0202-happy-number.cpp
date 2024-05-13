class Solution {
public:
    bool isHappy(int n) {
while(n>9)
{
    int temp=n;
    int ans=0;
    while(temp)
    {
        int d=temp%10;
        temp=temp/10;
        ans=ans+(d*d);
    }
    n=ans;
}
if(n==1 || n==7)
   return true;
return false;
        
    }
};