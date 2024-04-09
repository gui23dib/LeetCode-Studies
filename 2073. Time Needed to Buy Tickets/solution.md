# Solution

## Thought Process

I first tried using a while loop and a queue like structure to approach the solution, unfortunately it didn't work due to (I believe) memory restrictions.

Then I thought about how to solve the problem without iterating the vector more than once.

So I figured out that every number after the K would be iterated "one time less" since the solution would "stop counting" after it had reached the tickets[K] value, so the for loop iterates once through every value adding up the time in minimun value between the current value in tickets vector, or the target value (tickets[k]) or target value - 1 in case the current index is bigger than K.
