
# Solution

## Thought Process

I had a fair portion of difficulty on this one, even tried some solutions with 3 while loops that unfortunately exceeded maximum runtime in bulky test cases.

Eventualy I came across this sliding window approach, that works in inverse logic, running the window through the array while it is bigger or equal to K, then stopping when the value is accepted and therefore adding the possible arrays to the answer count (since all subarrays in the selected "big" array would work the same).

So it uses a slow integer to iterate through the whole array, while having a fast variable integer that iterates each element in the array searching for the stop point where the total sum is lesser than K (or **fast** has reached **slow** pointers and therefore the "search window" is closed)

## Complexity

Observation: I'm really not confident in this complexity answer but I'm not sure if there are any different approaches.

Since the algorithm iterates thorugh the list in exponential time, with two while loops one inside another, the complexity would be:

Time complexity => **O(n^2)** where **n = number of nodes in the num vector**
