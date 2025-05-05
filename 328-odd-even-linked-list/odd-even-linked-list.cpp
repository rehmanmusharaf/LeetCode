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
    ListNode* oddEvenList(ListNode* head) {
    ListNode* newHead=head;
    ListNode* headToMove=head;
    vector<int> even;
    if(head==nullptr||head->next==nullptr)
    return head;
    int i=1;
    while(head!=nullptr)
    {
        if(i%2==1)
        {
        cout<<"i is: "<<i<<endl;
        headToMove->val=head->val;
        headToMove=headToMove->next;
        }
        else
        {
        even.push_back(head->val);
        }
        head=head->next;
        i++;
    }
    i=0;
    while(headToMove!=nullptr)
    {
        cout<<"even["<<i<<"]: "<<even[i]<<endl;
        headToMove->val=even[i];
        headToMove=headToMove->next;
        i++;
    }
    return newHead;
    }
};