Problem: Reverse a Singly Linked List
Approach: Iterative (Three-Pointer Technique)
We maintain three pointers: prev, curr, and nextNode.
At each step, we flip the curr->next to point to prev.
Time Complexity: $O(n)$ where $n$ is the number of nodes.
Space Complexity: $O(1)$ as we only use a few pointers regardless of list size.
