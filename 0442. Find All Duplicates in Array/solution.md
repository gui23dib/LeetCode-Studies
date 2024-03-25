
# Solution

## Thought Process

Since I had just solved problem **127. Find the Duplicate Number** that is essentially the same problem, but returning the first duplicate, this one was pretty simple.

I added a fresh new vector called result and every time the for loop finds an already registered value in the hash map it adds the current num value in the result array.

Finally it returns the array and in case it doesn't have duplicates returns [].
