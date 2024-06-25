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
    bool isPalindrome(ListNode* head) {
        vector<int> arr;
        ListNode* temp=head;
        if(head==NULL||head->next==NULL)
        return true;
        while(temp!=NULL)
        {
            arr.push_back(temp->val);
            temp=temp->next;
        }
        for(int i=size(arr)-1;i>=0;i--)
        {
            if(arr[i]!=head->val)
            {
                return false;
            }
            head=head->next;
        }
        return true;
    }
};