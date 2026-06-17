class Solution {
public:
    char processStr(string s, long long k) {
    //  string str="";
    //  for(auto i:s)
    //  {
    //     if(i>='a' && i<='z')
    //     {
    //         str+=i;
    //     }else if(i=='*')
    //     {
    //         if(!str.empty())
    //         {
    //             str.pop_back();
    //         }
    //     }else if(i=='#')
    //     {
    //         str+=str;
    //     }else if(i=='%')
    //     {
    //         ::reverse(str.begin(),str.end());
    //     }
    //  }
    // if (k < 0 || k >= str.length()) {
    //         return '.';
    //     }
    //     return str[k];   

long long len=0;

        for(char c:s) {
            if(islower(c)) {
                len++;
            } else if(c=='*') {
                if(len>0) len--;
            } else if(c=='#') {
                len*=2;
            }
        }

        if(k>=len) return '.';

        for(int i=s.size()-1;i>=0;i--) {
            char c=s[i];

            if(islower(c)) {
                if(k==len-1) return c;
                len--;
            } else if(c=='*') {
                len++;
            } else if(c=='#') {
                len/=2;
                k%=len;
            } else if(c=='%') {
                k=len-1-k;
            }
        }

        return '.';

    }
};