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
    void count(TreeNode *root,vector<int>&ans)
    {
        if(root==NULL) return;
        
        count(root->left,ans);
        ans.push_back(root->val);
        count(root->right,ans);
    }
    int countNodes(TreeNode* root) {

       // int count=0;
       //  vector<int>ans;
       //  count(root,ans);
       //  for(int i=0;i<ans.size();i++)
       //  {
       //      count++;
       //  }
       //  return count;

        
        if(root==NULL) return 0;
        
        return 1+countNodes(root->left)+countNodes(root->right);
    }
};