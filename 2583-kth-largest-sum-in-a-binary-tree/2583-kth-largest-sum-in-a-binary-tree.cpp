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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        queue<TreeNode*> q;
            priority_queue<long long,vector<long long>,greater<long long>>pq;
            q.push(root); q.push(NULL);
            long long sum=0;

            while(q.size() > 1)
            {
                TreeNode* front=q.front();
                if(front == NULL)
                {
                    q.push(NULL);
                    if(pq.size() < k)
                    {
                        pq.push(sum);
                    }
                    else if(sum > pq.top()){        
                        pq.pop();
                        pq.push(sum);
                    }
                    sum=0;
                }
                else{
                    if(front->left != NULL)
                    {
                        q.push(front->left);
                    }
                    if(front->right != NULL)
                    {
                        q.push(front->right);
                    }
                    sum+=front->val;
                }
                q.pop();
            }

            if(pq.size() < k)
            {
                pq.push(sum);
            }
            else if(sum > pq.top()){        
                pq.pop();
                pq.push(sum);
            }
            return pq.size() < k ? -1 : pq.top();
    }
};