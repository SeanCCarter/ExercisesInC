# Reflection 1
###### by Sean Carter

### Written Sprint Reflection
One of my personal learning goals was an improved understanding of C, since it is such a fundamental backbone of many programming languages and environments. That has been a success so far, although that has gone very slowly - the book is not at all easy to read, but the exercises and reading questions have been useful. I am a little less worried about scaffolding now because of that.

Our team has adapted pretty well to the eduScum ceremonies. We have been discussing what has happened, and what needs to happen, every time we meet (which sets a goal for most of the class time that we have). At the beginning of this sprint, we redid many of the cards on our Trello board so that they would have an explicit definition for "done" - for example, features we add to our program are done when they have all of the requirements we are adding as checklists, and readings are done once everyone has finished them. We also decided during the "0th" reflection to pair program on the main functions of our shell program, which has definitely helped us all understand the structure of what we are doing.

### Exercises
#### Head First C
- [Chapter 1](../exercises/ex01/ex01.md) (code is in the same folder)
- [Chapter 2](../exercises/ex02/ex02.md) (stack.c is in the same folder)

#### ThinkOS
- [Chapter 1](../reading_questions/thinkos1.md)
- [Chapter 2](../reading_questions/thinkos2.md)

### Exam Question and Solution
##### Question (from Head First C Chapter 2):
If you were to create an array inside a c function, and then returned a pointer to it from the function, would you be able to access the array? Why or why not?

##### Answer
You wouldn't be able to access the array, because local variables inside functions are added to the stack, then removed once the function finishes executing. The pointer would point to a nonexistent variable.
