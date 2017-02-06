## Chapter 1


### Compilation

1) Give an example of a feature common in interpreted languages that is rare in compiled languages.
*Dynamic types - compilers often use static types to catch errors before runtime.*

2) Name two advantages of static typing over dynamic typing.
*It can save space (variable names aren't stored at runtime), and it can help find errors in pars of the code that would otherwise never run.*

3) Give an example of a static semantic error.
*You would get one if you called a function with the wrong number of arguments.*

4) What are two reasons you might want to turn off code optimization?
*It can introduce or eliminate subtle bugs in code that doesn't perfectly conform to the C standard*

5) When you run `gcc` with `-S`, why might the results look different on different computers?
*It's compiling to assembly code, which is dependent on the computer's architecture.*

6) If you spell a variable name wrong, or if you spell a function name wrong,
the error messages you get might look very different.  Why?
*The first error would be a parsing error, while the second would likely be a linking error (I think. Since it looks up library functions later, it can't know whether a function is mis-spelled or simply elsewhere until the linking process)*

7) What is a segmentation fault?
*It is the error that occurs when you access a memory address that you aren't supposed to.*
