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
    
    void sol(TreeNode* &root,map<int,bool> &check,vector<TreeNode*>&res)
    {
        if(!root) return;
        
        sol(root->left,check,res);
        sol(root->right,check,res);
        
        if(check[root->val])
        {
            if(root->left)
                 res.push_back(root->left);
            if(root->right)
                 res.push_back(root->right);
            root=NULL;
        }
    }
        vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        
            map<int,bool>check;
            for(int i:to_delete)
            {
              check[i]=true;  
            }
            vector<TreeNode*>res;
            sol(root,check,res);
            if(root)
                 res.push_back(root);
            
            return res;
    }
};