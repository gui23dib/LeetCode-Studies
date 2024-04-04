# Solution

## Thought Process

This one was definetly one of my favorites, since I had already worked with this type of problem (searching in adjacent axis of the matrix) while making a pac-man prototype in C, I knew the basics of the solution.

I first did the search function recursing through all adjacent spaces until the word was complete but stumbled upon a runtime error that I could not figure out.

After debugging I found out that my recursion was looping when the algorithm found the same two characters adjacent to each other, so I fixed it by changing the value of visited spaces in the matrix so they could not be searched anymore.
