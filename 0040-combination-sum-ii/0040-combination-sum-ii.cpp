class Solution {
public:
    void solve(vector<vector<int>> &ans,vector<int> &path,vector<int>& candidates,int target,int index){
if(target==0){
   
    ans.push_back(path);
    return;
}
if(target<0)
return;

for(int i=index;i<candidates.size();i++){
    if(i>index)// loop chi first iteration nahi yr
{
    if(candidates[i] == candidates[i-1])
    continue;
}

    path.push_back(candidates[i]);
    solve(ans,path,candidates,target-candidates[i],i+1);
    path.pop_back();
}


}
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
      vector<vector<int>>ans;
vector<int>path;
sort(candidates.begin(),candidates.end());
solve(ans,path,candidates,target,0);
// for(auto st:ans){
    // finalAns.push_back(st);
// }
set<vector<int>>st;
for(auto it:ans){
    st.insert(it);
}
ans.clear();
for(auto it:st){
    ans.push_back(it);
}
         return ans; ;
    }
};