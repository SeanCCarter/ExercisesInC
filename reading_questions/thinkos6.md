## Chapter 6


### Memory management

1) Which memory management functions would you expect to take constant time?  Which ones take time proportional to the size of the allocated chunk? *- free is usually constant, while the others depend on different factors. realloc and is often dependent on the size of the original chunk.*

2) For each of the following memory errors, give an example of something that might go wrong:

a) Reading from unallocated memory. *- you might get data stored there from something else, and have a result that doesn't make sense to whatever is accessing it. Or, if the computer is merciful, you get a segfault.*

b) Writing to unallocated memory. *- nothing happens untill something else tries to read the function. Or, you overwrite your own allocation data in a chunk.*

c) Reading from a freed chunk. *- It's the same as reading unallocated memory*

d) Writing to a freed chunk. *- Same as writing to unallocated memory (Freeing it de-allocates it)*

e) Failing to free a chunk that is no longer needed. *- Creates a memory leak, which slowly consumes all RAM on the computer. Looking at you, Chrome.*


3) Run

    ps aux --sort rss

to see a list of processes sorted by RSS, which is "resident set size", the amount of physical
memory a process has.  Which processes are using the most memory? *- Top two are firefox, one for each window.*

4) What's wrong with allocating a large number of small chunks?  What can you do to mitigate the problem? *- Malloc has a very small overhead, but it's significant with tiny chunks. Using an array to store data that small might help fix things.*

If you want to know more about how malloc works, read
[Doug Lea's paper about dlmalloc](http://gee.cs.oswego.edu/dl/html/malloc.html)
