
# Solution

## Thought Process

Since I had just solved problem 234 (Palindorme Linked List) that had similar concepts in regards to reversing the list I first started recreating the function **reverseLinkedList**, then I first tried to duplicate the linked list, working with two main variables: **ListNode* list1 = head** and **ListNode* list2 = reverseLinkedList(head)** which did not work due to runtime restrictions.

Then I thought that if I maybe could half the second list only enough so that it would be all iterated through while interleaving through the main list I would solve the problem.

So I created the **halfLinkedList** with some adjustment from problem *234* and applied to the second list (now named reversedHalf) as in **ListNode* reversedHalf = reverseLinkedList(halfLinkedList(head))**

## Complexity

Since the algorithm iterates thorugh the list in constant time with while loops, the complexity would be:

Time complexity => **O(n)** where **n = number of nodes in the linked list** in all cases
