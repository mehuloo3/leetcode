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
      vector<int> getLeafDist(TreeNode* root, int dist, int& out1) {
        
        if(root->left == nullptr && root->right == nullptr) {
            return vector<int> {1};
        }
        
        vector<int> leftLeafsDist;
        
        if(root->left) {
            leftLeafsDist = getLeafDist(root->left, dist, out1);
        }
        
        vector<int> rightLeafsDist;
        
        if(root->right) {
            rightLeafsDist = getLeafDist(root->right, dist, out1);
        }
        
        for(int i = 0; i < leftLeafsDist.size(); i++) {
            for(int j = 0; j < rightLeafsDist.size(); j++) {
                if(leftLeafsDist[i] + rightLeafsDist[j] <= dist) {
                    out1++;
                }
            }   
            
        }
        
        vector<int> out;
        
        for(auto i : leftLeafsDist) {
            out.push_back(i + 1);
        }
        
        for(auto i : rightLeafsDist) {
            out.push_back(i + 1);
        }
        
        return out;
    }
    
     
    int countPairs(TreeNode* root, int distance) {
        
        int out=0;
        getLeafDist(root,distance,out);
        return out;
        
    }
};