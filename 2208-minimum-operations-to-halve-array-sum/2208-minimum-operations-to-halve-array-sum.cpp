class Solution {
public:
    int halveArray(vector<int>& nums) {
        priority_queue<double>Q;
        double sum=0;
        for(auto i:nums)
        {
            sum+=i;
            Q.push(i);
        }
        int cnt=0;
        double compare=sum;
        while(!Q.empty())
        {
            double x=Q.top();
            Q.pop();
            
            compare=compare-(x/2);
            //base cond. for the termination
            if(compare<=(sum/2))
            {
                cnt++;
                break;
            }
            cnt++;
            Q.push(x/2);
            
        }
        return cnt;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
//        priority_queue<double>Q;
//        double sum=0;
//        int cnt=0;
//         for(auto i:nums)
//         {
//             sum+=i;
//             Q.push(i);
//         }
//         double compare=sum;
//         while(!Q.empty())
//         {
//             double x=Q.top();        
//             Q.pop();
//             compare=compare-(x/2);
//             if(compare<=(sum/2))
//             {
//                 cnt++;
//                 break;
//             }
//             cnt++;
//             Q.push(x/2);
            
//         }
//         return cnt;
    }
};