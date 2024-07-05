/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        
        if(!head ||!head->next || !head->next->next)
               return {-1,-1};
        
        ListNode* previous=head;
        ListNode* current=previous->next;
        ListNode* nextNode=current->next;
        vector<int >res;
        int count=1;
        while(nextNode)
        {
            if((current->val > previous->val) && (current->val >nextNode->val)||(current->val < previous->val && current-> val < nextNode->val))
                res.push_back(count);
            count++;
            previous=current;
            current=nextNode;
            nextNode=nextNode->next;
            
       }
        if(res.size()<2)
               return {-1,-1};
        int ans=INT_MAX;
        for(int i=1;i<res.size();i++)
        {
            ans=min(ans,res[i]-res[i-1]);
        }
        return {ans,res.back()-res[0]};
    }
};