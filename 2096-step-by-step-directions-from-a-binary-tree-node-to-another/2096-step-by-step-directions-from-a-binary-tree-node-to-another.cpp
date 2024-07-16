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

    bool sol(TreeNode* root, int val, string& path) {
    if (root->val == val)
      return true;
    if (root->left && sol(root->left, val, path))
      path.push_back('L');
    else if (root->right && sol(root->right, val, path))
      path.push_back('R');
    return !path.empty();
    }
    string getDirections(TreeNode* root, int startValue, int destValue) {
        
    string start;
    string dest;

    sol(root,startValue,start);
    sol(root,destValue,dest);

    while (!start.empty() && !dest.empty() && start.back() == dest.back())
    {
      start.pop_back();
      dest.pop_back();
    }

    return string(start.length(),'U')+string(dest.rbegin(),dest.rend());
        
    }
};