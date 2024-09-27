class Solution {
public:
    int countDigits(int num) {
        int n=num;
        int cnt=0;
        while(n)
        {
            int dig=n%10;
            if(num%dig==0)  cnt++;
            n=n/10;
            }
            
        
     return cnt;   
    }
};