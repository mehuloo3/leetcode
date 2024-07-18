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
    int sol(TreeNode* root)
    {
      if(!root) return 0;
        
        int L=sol(root->left);
        if(L==-1) return -1;
        int R=sol(root->right);
        if(R==-1) return -1;
        
        if(abs(L-R)>1){
            return -1;}
        else{
        return 1+max(L,R);}   
    }
//     int solution(TreeNode* root,int valid)
//     {
//         if(!root) return 0;
        
//         int L=solution(root->left,valid);
//         int R=solution(root->right,valid);
        
//         if(abs(L-R)>1)
//             valid=0;
        
//         return 1+max(L,R);
        
//     }
    bool isBalanced(TreeNode* root) {
        // bool valid=1;
        // solution(root,valid);
        // return valid;
        int x=sol(root);
        if(x==-1) return false;
        else return true;
        
    }
};