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
    ListNode* middleNode(ListNode* head) 
    {
        ListNode* temp=head;
        int i=0;
    while(head!=NULL)
    {
     i++;
     head=head->next;
    } 
    i=(i/2)+0.1;
    for(int j=0;j<i;j++)
    {
        temp=temp->next;
    }
    return temp;

    }
};