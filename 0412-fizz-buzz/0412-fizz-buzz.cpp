class Solution {
public:
    vector<string> fizzBuzz(int n) {
       vector<string>str;
        vector<string>v={"FizzBuzz","Fizz","Buzz"};
        for(int i=1;i<=n;i++)
        {
            
                if(i%3==0 && i%5==0)
                {
                    // str.push_back("FizzBuzz");
                    str.push_back(v[0]);
                }
                else if(i%3==0)
                {
                    // str.push_back("Fizz");
                    str.push_back(v[1]);
                }
                else if(i%5==0)
                {
                    // str.push_back("Buzz");
                    str.push_back(v[2]);
                }
                else
                {
                    str.push_back(to_string(i));
                }
            }
        
        return str;
    }
};