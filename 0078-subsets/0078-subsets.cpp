class Solution {
public:
    void calcSubset(vector<int>& A, vector<vector<int> >& res,
                vector<int>& subset, int index)
{
    res.push_back(subset);
    for (int i = index; i < A.size(); i++) {
        subset.push_back(A[i]);
        calcSubset(A, res, subset, i + 1);
        subset.pop_back();
    }
}
    vector<vector<int>> subsets(vector<int>& nums) {
       //  int n=nums.size();
       // for(int i=0;;i<(1<<n);i++)
       // {
       //     for(int j=0;j<n;j++)
       //     {
       //         if((i&(1<<j))!=0)
       //         {
       //             return nums[j];
       //         }
       //      }
       // }
    vector<int> subset;
    vector<vector<int> > res;
    int index = 0;
    calcSubset(nums, res, subset, index);
    return res;
    }
};