class Solution {
public:
    void reverseString(vector<char>& s) {
     
        // int start=0;
        // int end=s.size()-1;
        // while(start<end)
        // {
        //     swap(s[start],s[end]);
        //     start++;
        //     end--;
        // }
        
        // using stack
        stack<char>str;
        for(int i=0;i<s.size();i++)
        {
            str.push(s[i]);
        }
        int j=0;
        while(!str.empty())
        {
            s[j]=str.top();
            j++;
            str.pop();
        }
    }
};