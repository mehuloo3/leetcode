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
    void attach(TreeNode* root,string x,vector<string>&res)
    {
        if(!root) return;
        if(root->left==NULL && root->right==NULL)
        {
            x+=to_string(root->val);
            res.push_back(x);
        }
        x+=to_string(root->val)+"->";
        
        attach(root->left,x,res);
        attach(root->right,x,res);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        string x="";
        vector<string>ans;
        attach(root,x,ans);
        return ans;
    }
};