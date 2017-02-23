##Chapters 1 and 2

###### Puzzle 1:
Assuming you and your freind Bob can call each other at any time, how can you be sure who ate lunch first?

Answer: If either person hasn't recieved a call before they eat lunch, call the other person and inform them that you are eating lunch now. Whoever called was the first person to start eating lunch.

###### Puzzle 2:
Given Threads A and B, which both set the value of x, and one of which prints x:
1. What path yields output 5 and final value 5
2. What path yields output 7 and final value 7
3. Is there a path that yields output 7 and final value 5?

Answer:
1. B1, A1, A2
2. A1, B1, A2
3. No, because 'x = 5' MUST run before 'print x', so there is no way for it to become 5 after x = 7 has been printed.

###### Puzzle 3:
100 Threads run the code in the book. What are the largest and smallest possible counts?

Answer:
- The largest possible value is 10,000. That would mean that every single thread had successfully updated the count.
- The smallest is, I think, 100: Each thread could load the current value, and then each one could write 1 more to it.

