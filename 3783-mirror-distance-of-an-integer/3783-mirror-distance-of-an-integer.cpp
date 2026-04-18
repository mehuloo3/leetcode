class Solution {
public:
int reverse(int n)
{
 string s="";
 while(n!=0)
 {
    int x=n%10;
    s+=to_string(x);
    n=n/10;
 }
 return stoi(s);
}
    int mirrorDistance(int n) {
        int p=reverse(n);
        return abs(p-n);
    }
};