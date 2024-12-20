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
    TreeNode* reverseOddLevels(TreeNode* root) {
        dfs(root->left,root->right,true);
        return root;
    }
private:
  void dfs(TreeNode* left, TreeNode* right,bool check) {
    if (left == nullptr)
      return;
    if (check)
      swap(left->val, right->val);
    dfs(left->left, right->right, !check);
    dfs(left->right, right->left, !check);
    
  }
};