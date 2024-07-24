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
       void newx(TreeNode* root,string temp,vector<string>&res)
       {
         if(root==NULL) return;
           if(root->left==NULL && root->right==NULL)
           {
               temp+=to_string(root->val);
               res.push_back(temp);
           }
           temp+=to_string(root->val)+"->";
           newx(root->left,temp,res);
           newx(root->right,temp,res);
           
       }
//     void attach(TreeNode* root,string x,vector<string>&res)
//     {
//         if(!root) return;
//         if(root->left==NULL && root->right==NULL)
//         {
//             x+=to_string(root->val);
//             res.push_back(x);
//         }
        // x+=to_string(root->val)+"->";
        
//         attach(root->left,x,res);
//         attach(root->right,x,res);
//     }
    vector<string> binaryTreePaths(TreeNode* root) {
        
        
        
        
        
        
        string x="";
        vector<string>ans;
        newx(root,x,ans);
        // attach(root,x,ans);
        return ans;
    }
};