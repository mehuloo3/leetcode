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
//     int minDistance = INT_MAX;
//     int firstMaIndex = -1;
//     int prevMaIndex = -1;
//     int index = 1;
//     ListNode* prev = head;       
//     ListNode* curr = head->next;  

//     while (curr->next) {
//       if (curr->val > prev->val && curr->val > curr->next->val ||
//           curr->val < prev->val && curr->val < curr->next->val) {
//         if (firstMaIndex == -1) 
//           firstMaIndex = index;
//         if (prevMaIndex != -1)
//           minDistance = min(minDistance, index - prevMaIndex);
//         prevMaIndex = index;
//       }
//       prev = curr;
//       curr = curr->next;
//       ++index;
//     }

//     if (minDistance == INT_MAX)
//       return {-1, -1};
//     return {minDistance, prevMaIndex - firstMaIndex};
        
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