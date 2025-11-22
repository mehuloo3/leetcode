class Solution {
public:
bool ispal(string s)
    {
        int n=s.size();
        int i=0;
        int j=n-1;
        while(i<n && j>0)
        {
            if(s[i]!=s[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }

// bool ispal(int id) {
//     int a = id / (26 * 26);
//     int c = id % 26;
//     return a == c;
// }
    int countPalindromicSubsequence(string s) {
    //     int n=s.size();
    //    vector<string>vc;
    //    int cnt=0;
    //     for(int i=0;i<n;i++)
    //     {
    //         for(int j=i+1;j<n;j++)
    //         {
    //             for(int k=j+1;k<n;k++)
    //             {
    //             string str="";
    //             str+=s[i];
    //             str+=s[j];
    //             str+=s[k];
    //             vc.push_back(str);
    //             }
    //         }
    //     }
    //     sort(vc.begin(),vc.end());
    //     vc.erase(unique(vc.begin(),vc.end()),vc.end());
    //     for(auto i:vc)
    //     {
    //         if(ispal(i))
    //         {
    //             cnt++;
    //         }
    //     }
    //     return cnt;

          map<char, int> firstOcc;
        map<char, int> lastOcc;

        // Record first and last occurrence
        for (int i = 0; i < (int)s.size(); i++) {
            lastOcc[s[i]] = i;
            if (firstOcc.find(s[i]) == firstOcc.end()) {
                firstOcc[s[i]] = i;
            }
        }

        int ans = 0;

        // For each possible outer character C
        for (auto [C, L] : firstOcc) {
            int R = lastOcc[C];
            set<char> middleChars;

            // Count distinct middle characters X between L and R
            for (int i = L + 1; i < R; i++) {
                middleChars.insert(s[i]);
            }

            ans += (int)middleChars.size();
        }

        return ans;
    }
};