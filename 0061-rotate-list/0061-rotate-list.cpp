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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;
        ListNode* curr=head;
        vector<int>v;
        while(curr)
        {
            v.push_back(curr->val);
            curr=curr->next;
        }
        int n=v.size();
        k=k%n;
        if(k==0)
        {
            return head;
        }
        reverse(v.begin(),v.end());
        reverse(v.begin(),v.begin()+k);
        reverse(v.begin()+k,v.end());
        curr = head;
        for (int i = 0; i < v.size(); i++) {
        curr->val = v[i];
        curr = curr->next;
    }

    return head;
        
    }
};