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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* headtoreturn=head;
        if(head==nullptr||head->next==nullptr)
        return head;
        while(head->next!=nullptr)
        {
            ListNode* head2=head->next;
            if(head->val==head2->val)
            {
                head2=head2->next;
                while(head2!=nullptr&&head->val==head2->val)
                {
                    head2=head2->next;
                }
                head->next=head2;

            }
            if(head->next!=nullptr)
            head=head->next;
        }
        return headtoreturn;
    }
};