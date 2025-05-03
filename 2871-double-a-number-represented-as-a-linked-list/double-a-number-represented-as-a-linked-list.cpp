class Solution {
public:
    // Reverse linked list
    ListNode* reverse(ListNode* head) {
        ListNode* prev = nullptr;
        while (head) {
            ListNode* nextNode = head->next;
            head->next = prev;
            prev = head;
            head = nextNode;
        }
        return prev;
    }

    ListNode* doubleIt(ListNode* head) {
        head = reverse(head);  // Step 1: reverse to process from least significant digit
        ListNode* curr = head;
        int carry = 0;

        while (curr) {
            int sum = curr->val * 2 + carry;
            curr->val = sum % 10;
            carry = sum / 10;

            // If at the end and still have a carry, create new node
            if (!curr->next && carry) {
                curr->next = new ListNode(carry);
                break;
            }
            curr = curr->next;
        }

        return reverse(head);  // Step 3: reverse back the list
    }
};
