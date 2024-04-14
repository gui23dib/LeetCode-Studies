# Solution

## Thought Process

At first glance I already knew taht I'd be using some sort of recursion algorithm and after some brainstorming and writing I thought of Depth First Search.

I simply applied the depth first search with a bool isLeft flag to control when the name  would be summed up in return of the iteration.

The algorithm iterate through all nodes (left and right) going as deep as possible before it start returning its value to the last iteration until it reaches the base node and return the total left sum value.
