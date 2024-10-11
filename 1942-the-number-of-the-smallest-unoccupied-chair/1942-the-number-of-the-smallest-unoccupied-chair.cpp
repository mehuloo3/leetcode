class Solution {
public:
    int smallestChair(vector<vector<int>>& times, int targetFriend) {
       map<vector<int>, int> M;
        for(int i = 0; i < times.size(); i++) {
            M[times[i]] = i;
        }
        
        set<pair<int, int> > pq;
        
        int cu = 0;
        for(auto x: M) {
            vector<int> tms = x.first;
            int i = x.second;
            
            int ca = -1;
            if(!pq.empty() && pq.begin()->first <= tms[0]) {
                pair<int, int> tp = *pq.begin();
                int et = tp.first;
                int cn = tp.second;
                
                for(auto itr = pq.begin(); itr != pq.end(); itr++) {
                    auto xpi = *itr;
                    if(xpi.first <= tms[0] and xpi.second <= cn) {
                        et = xpi.first;
                        cn = xpi.second;
                    }
                }
                
                auto it = pq.find(make_pair(et, cn));
                pq.erase(it);
                
                pq.insert(make_pair(tms[1], cn));
                ca = cn;
            } else {
                pq.insert(make_pair(tms[1], cu));
                ca = cu;
                cu++;
            }
            
            if(i == targetFriend) {
                return ca;
            }
        }
        
        return -1;  
    }
};