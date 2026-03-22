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
    ListNode* insertionSortList(ListNode* head) {
        ListNode *temp=head;
        vector<int>arr;

        while(temp!=NULL)
        {
            arr.push_back(temp->val);
            temp=temp->next;
        }
        sort(arr.begin(),arr.end());
        ListNode *X=new ListNode(arr[0]);
        ListNode *curr=X;

        for(int i=1;i<arr.size();i++)
        {
            curr->next=new ListNode(arr[i]);
            curr=curr->next;
        }
        return  X;
    }
};