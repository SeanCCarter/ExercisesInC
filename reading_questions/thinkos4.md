## Chapter 4


### Files and file systems

1) What abstractions do file systems provide?  Give an example of something that is logically
true about files systems but not true of their implementations. *- In the abstraction, a file system is a sequence of bytes. The actual implimentation on the hardware involves larger blocks of bytes, stored wherever necessary.*

2) What information do you imagine is stored in an `OpenFileTableEntry`? *- I imagine it keeps track of how much of the file has been read, as well as things like its size and location that might be important.*

3) What are some of the ways operating systems deal with the relatively slow performance of persistent storage? *- Loading entire blocks at once, predictive block fetching, caching, and buffering*

4) Suppose your program writes a file and prints a message indicating that it is done writing.
Then a power cut crashes your computer.  After you restore power and reboot the computer, you find that the
file you wrote is not there.  What happened? *- The file was written into the buffer, rather than directly onto disk, just in case there will be more data to keep filling up the block.*

5) Can you think of one advantage of a File Allocation Table over a UNIX inode?  Or an advantage of a inode over a FAT? *- The FAT tables seem like they can files of an arbitrary size, but you couldn't find out information about all of the used blocks at once, since it's a linked list. The inode is just has an index to each block.*

6) What is overhead?  What is fragmentation? *- The space overhead is the size of the data structure that keeps track of the data (every file, no matter how small, will have its share of the overhead). Fragmentation is when a file has blocks scattered around a disk, so that their physical locations aren't related.*

7) Why is the "everything is a file" principle a good idea?  Why might it be a bad idea? *- It makes it easy to feed in any stream of bytes to a program, and have it treated the same way. A problem might be that some errors might occur only in certain types of operations, and the file abstraction could hide them from easy debugging.*

If you would like to learn more about file systems, a good next step is to learn about journaling file systems.
Start with [this Wikipedia article](https://en.wikipedia.org/wiki/Journaling_file_system), then
[Anatomy of Linux Journaling File Systems](http://www.ibm.com/developerworks/library/l-journaling-filesystems/index.html).
Also consider reading [this USENIX paper](https://www.usenix.org/legacy/event/usenix05/tech/general/full_papers/prabhakaran/prabhakaran.pdf).
