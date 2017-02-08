## Chapter 3


### Virtual memory

1) The Georgian alphabet has 33 letters.  How many bit are needed to specify a letter?
*2^6, or 64 (2^5 is 32, one too few)*

2) In the UTF-16 character encoding, the binary representation of a character can take up to 32 bits.
Ignoring the details of the encoding scheme, how many different characters can be represented? *2^32 = 4,294,967,296*

3) What is the difference between "memory" and "storage" as defined in Think OS? *Memory is a volatile place, where processes hold information while they run. Storage is where files go, so that processes can access them later, even if the computer is shut down. Basically, RAM vs HDDs and SSds*

4) What is the difference between a GiB and a GB?  What is the percentage difference in their sizes? *A Gib is 2^30 bytes, while a GB is 10^12 bytes.*

5) How does the virtual memory system help isolate processes from each other? *The virtual makes sure that programs never deal with actual, physical addresses, which means that they can't specify a memory location used by a different process.*

6) Why do you think the stack and the heap are usually located at opposite ends of the address space? *The stack grows down in memory, while the heap grows up, and you don't want them to collide and start overwriting each other.*

7) What Python data structure would you use to represent a sparse array? *It would make sense to use something like a dictionary - once you stored information, you could access it as if it was anywhere in a large array, without having to actually store blank values.*

8) What is a context switch? *It is the mechanism through which an operating system can interrupt a process, save its state, and then run a different process.*

In this directory, you should find a subdirectory named `aspace` that contains `aspace.c`.  Run it on your computer and compare your results to mine. *Main is a few bytes higher, global is exactly the same, local is a little lower, and p is much lower.*

1) Add a second call to `malloc` and check whether the heap on your system grows up (toward larger addresses). *The heap did grow upwards, using malloc again.*

2) Add a function that prints the address of a local variable, and check whether the stack grows down. *I assigned a second local int, and its memory location was actually higher.*

3) Choose a random number between 1 and 32, and allocate two chunks with that size.
How much space is there between them?  Hint: Google knows how to subtract hexadecimal numbers. *I chose 17, and the difference between the two was 20.*
