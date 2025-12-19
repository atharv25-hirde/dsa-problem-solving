#include <iostream>

// Definition for singly-linked list node.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        
        while (curr != nullptr) {
            // Store the next node before we overwrite curr->next
            ListNode* nextNode = curr->next;
            
            // Reverse the link
            curr->next = prev;
            
            // Move pointers one step forward
            prev = curr;
            curr = nextNode;
        }
        
        // Prev will be the new head of the reversed list
        return prev;
    }
};

// Helper function to print the list
void printList(ListNode* head) {
    while (head) {
        std::cout << head->val << " -> ";
        head = head->next;
    }
    std::cout << "nullptr" << std::endl;
}

int main() {
    // Creating a test list: 1 -> 2 -> 3 -> nullptr
    ListNode* head = new ListNode(1, new ListNode(2, new ListNode(3)));

    std::cout << "Original: ";
    printList(head);

    Solution sol;
    head = sol.reverseList(head);

    std::cout << "Reversed: ";
    printList(head);

    return 0;
}