class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        // If the list is empty or contains only one node, return the head
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        // Create a dummy node to simplify the logic for the head node
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prev = dummy;
        
        // Traverse the list in pairs
        while (head != nullptr && head->next != nullptr) {
            ListNode* first = head;
            ListNode* second = head->next;
            
            // Swap the nodes
            prev->next = second;
            first->next = second->next;
            second->next = first;
            
            // Move prev and head pointers for the next pair
            prev = first;
            head = first->next;
        }
        
        // Return the new head which is the next node of dummy
        return dummy->next;
    }
};
