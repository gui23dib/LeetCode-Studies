
# Solution

## Thought Process

First I started thinking that I should duplicate the LinkedList and iterate through the first and second comparing values, that is until I tried and got stopped at the [1, 1, 2, 1] sample.

I realized then that I wouldn't need to iterate over the two arrays after reversing and could only take the half of it, so I modularized the code into two functions halfLinkedList and reverseLinkedList.

Finally I just neededd to use the header iterating until half the total list '''while(reversedHalf)''' and whenever a value woud not match return False.

If the while-loop woud successfuly iterate throughout the whole halved list it would reach the final line of code returning True.

## Complexity

Since the algorithm iterates thorugh the list in constant time with while loops, the complexity would be:

Time complexity => **O(n)** where **n = number of nodes in the linked list** in all cases
