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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr= head;
        int len=0;

        while(curr!=NULL)
        {
            curr=curr->next;
            len++;
        }
        curr=head;
        int p=len-n-1;
        if(p<0)
        {
            head=head->next;
            delete curr;
            return head;
        }
        while(p--)
         curr=curr->next;
        
        ListNode* f=curr->next;
        curr->next=curr->next->next;
        delete f;
return head;

    }
};