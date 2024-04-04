# Solution

## Thought Process

The question really deserves its "Easy" label on leetcode and was a very simple problem to approach.

I first thought that for every "nested" character you would need to add "(" instances to a count and subtract ")" instances from it.

So i just did the count loop and added the max count updating every time that a count value would be bigger.

## Complexity

The algorithm only iterates through the string S once operating two if statements per loop iteration.

**O(n)** where **n = string length**
