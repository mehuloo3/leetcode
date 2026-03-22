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
    bool pal(vector<int>arr)
    {
        int i=0;
        int j=arr.size()-1;
        while(i<=j)
        {
            if(arr[i]!=arr[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    bool isPalindrome(ListNode* head) {
        ListNode *temp=head;
        vector<int>v;
        while(temp!=nullptr)
        {
            v.push_back(temp->val);
            temp=temp->next;
        }
        return pal(v);
    }
};