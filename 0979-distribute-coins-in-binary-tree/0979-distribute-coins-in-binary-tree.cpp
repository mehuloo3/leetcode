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
    int post(TreeNode* node,int &step)
    {
        if(node==NULL)
        {
            return 0;}
            int leftc,rightc;
            rightc=post(node->right,step);
            leftc=post(node->left,step);
            step+=abs(rightc)+abs(leftc);
            return leftc+rightc+node->val-1;        
    }
public:
    int distributeCoins(TreeNode* root) {
        int ans=0;
        post(root,ans);
        return ans;
    }
};