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
    bool flipEquiv(TreeNode* root1, TreeNode* root2) {
        if(root1==NULL and root2==NULL)
        {
            return true;
        }
        if(root1 and !root2)
        {
            return false;
        }
        if(!root1 and root2)
        {
            return false;
        }
        
        bool a,b;
        
        if(root1->val==root2->val)
        {
            a=flipEquiv(root1->left,root2->left);
            b=flipEquiv(root1->right,root2->right);
            
            if(!a or !b)
            {
               a=flipEquiv(root1->right,root2->left);
               b=flipEquiv(root1->left,root2->right);  
            }
            
            if(a and b) return true;
        }
        return false;
    }
};