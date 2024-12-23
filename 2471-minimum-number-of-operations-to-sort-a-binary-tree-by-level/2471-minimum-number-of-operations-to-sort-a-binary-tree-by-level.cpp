/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
   void swap(vector<int>& arr, int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
    int f(vector<int>& arr, int N)
{
    int ans = 0;
    vector<int> temp = arr;
    map<int, int> h;
    sort(temp.begin(), temp.end());
    for (int i = 0; i < N; i++) {
        h[arr[i]] = i;
    }
    for (int i = 0; i < N; i++) {
        if (arr[i] != temp[i]) {
            ans++;
            int init = arr[i];
            swap(arr, i, h[temp[i]]);
            h[init] = h[temp[i]];
            h[temp[i]] = i;
        }
    }
    return ans;
}
    int minimumOperations(TreeNode* root) {
        if(root==NULL) return 0;
        int sum=0;
       queue<TreeNode*>q;
       q.push(root);
        while(!q.empty())
        {
            vector<int>res;
            int n=q.size();
            for(int i=0;i<n;i++){
            TreeNode* temp=q.front();
            res.push_back(temp->val);
            q.pop();
            if(temp->left)
            {
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
                
            }
            sum+= f(res,res.size());
            res.clear();
            
        }
        return sum;
        
    }
};