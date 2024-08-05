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
class Solution{
    public:
    TreeNode* create(vector<int>&num,int start,int end)
      {
          if(start>end) 
          {
              return NULL;
          }
          int mid=start+(end-start)/2;
          
          TreeNode *root=new TreeNode(num[mid]);
          
          root->left=create(num,start,mid-1);
          root->right=create(num,mid+1,end);
          
          return root;
      }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
         return create(nums,0,nums.size()-1);
    }
};