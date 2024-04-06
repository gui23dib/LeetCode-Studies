
# Solution

## Thought Process

Firstly I thought about doing the reverse for loop until it reaches the first ' ' separator and then returning the len of the last captured characters.

Fortunately it worked in first try, and then I did it in a python oneliner just for fun using split instead of a for loop.

## Complexity

The code only uses one for loop that stops as soon as it reaches the first separator operating only an if statement;

Time complexity => **O(k)** where **k = length of last word**
