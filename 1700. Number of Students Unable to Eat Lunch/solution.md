# Solution

## Thought Process

The question makes it very simple to think of a stacks and queues approach, and I thought of playing with the concept using only the lists given on the function's parameter.

So I used erase and begin as a "pop()" method and used pushback front as an insertion method in the simulated queue on students vector.

The while loop iterates while there are still students in the queu or if the number of students moving in the line is equal to the whole line, which means every student has already tested with the current sandwich on top of the stack and has been moved back withouth eating the sandwich, therefore itnerrupting the loop with the number of students which looped in the current sandwich.

## Complexity

The algorithm only iterates through the vector once variating on the number of iterations based on the combinations of students and sandwiches.

*Best Case* = **O(n)** where **n = vector length**

*Worst Case:*
I'm stil not confident in determining a worst case bigO notation for this problem, but I would say the worst case is when for each sandwich a corresponding student is on the last position of the queue, so that it needs to iterate to the list (vector length) M time every time the iteration student == sandwich concludes, the list N students gets smaller and the while iterates one time less.
