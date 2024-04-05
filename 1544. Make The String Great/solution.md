# Solution

## Thought Process

I first explored how the iteration would work mainly working around the second example where the string would get reduced twice becoming a bad string once reduced.

So I knew that I had to use a while loop with some sort of flag, in this case goodString variable.

Then I did the for loop iterating until the first case where the absolute difference of the current and next characters are equal to 32 (Since it works both ways for "Aa" and "aA" that are 32 values apart from each other in the ASCII values table).

After trying some failed attempts I had to search for a function that would remove the iddentifie "bad: characters withouth distorting the string, then I found erase() that did the job just right.
