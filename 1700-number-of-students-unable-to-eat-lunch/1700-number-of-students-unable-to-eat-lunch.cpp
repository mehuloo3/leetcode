class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int>q;
        
        for(auto i:students)
        {
            q.push(i);
        }
        int cnt=0;
        int i=0;
        while(cnt<q.size())
        {
            if(sandwiches[i]==q.front())
            {
                q.pop();
                cnt=0;
                i++;
            }
            else
            {
                int x=q.front();
                q.pop();
                q.push(x);
                cnt++;
            }
        }
        return q.size();
    }
};