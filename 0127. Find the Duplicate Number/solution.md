
# Solution

## Thought Process

At first glance I've already though of a hashMap to solve the problem, it is a concept which i'm not totally comfortable with and one of the only implementations which I had used was in a similar "duplicate values" scenario.

I first searched the syntax in c++ (that confused mw quite a bit) and opted to use unordened_map as my data structure.

Then I had to simply iterate through the array while adding values to the hashmap until I find an index with an already estabilished value.

Lastly I added **return -1** only to cases in which there are no duplicate numbers.

## Complexity

I'm not really confident in determining the complexity of this problem in specific, since I've read some discussion around insertion and reading complexity values in hashmaps, but I would say that since it iterates only once in a while loop stopping once it finds the duplicate value that the comlexity is:

**n = number of nodes in the linked list**
Best cases => **O(n - (n - 1))** where the first and second number in the list (indexes 0 and 1) are the same value. Example: [3, 3, 1, 2, 4]

Worst cases => **O(n)** where the duplicate value is in the last index of the array and the while loop iterates **n** times. Example: [4, 3, 2, 1, 3]

## Aditional thoughts

I usually read other people solutions after completing my own just so I can get a sense of where should I improve and how many approaches there are, surprisingly I haven't found any hashMap solutions, not sure if they're not optimal or not "interview efficient" but it does makes me curious.
