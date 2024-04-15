# Solution

## Thought Process

Since yesterday's problem (0404) used dfs with graph recursion to sum only left leaves, it was pretty simple to figure out how to solve for this one.

For each new level on the node it adds the value on the proper unit corresponding to its depth then appending the last value, until it sums it all up in the last child node.
