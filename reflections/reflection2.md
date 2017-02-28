# Reflection 2
###### by Sean Carter

### Written Sprint Reflection

The project went quite well this sprint. I was able to understand the code well enough to help refactor our main loop, and add in the ability to load a configuration file. Since one of my goals was an improved understanding of C, this is good - after many of the exercises we've done, I have a much easier time working throug the code that we had written and improving it.

Some of our improvements to our process were also worked well. Durring our last reflection, we decided to be more specific about when we wanted our readings done, and what we wanted out of them. I think that helped me focus on them a little bit better. However, we didn't meet quite as consistantly durring this sprint, partially due to the snow days and general schedualing conflicts. I think that being more consistant about this will make it easier to make progress on our project.

### Exercises
#### Head First C
- [Chapter 2.5](../exercises/ex02.5/find_track.c)
- [Chapter 3](../exercises/ex03/tee.c)
- [Chapter 4](../exercises/ex04/Makefile)
- [Chapter 9](../exercises/ex09/fork.c)

#### ThinkOS
- [Chapter 3](../reading_questions/thinkos3.md)
- [Chapter 4](../reading_questions/thinkos4.md)
- [Chapter 6](../reading_questions/thinkos6.md)

### Exam Question and Solution
##### Question (Taken from thinkOS Chapter 4):
One annoyance of working with files on computers is that when data is "saved", it might not be on the hard drive yet - it's still waiting to fill a "block" before it writes. What considerations make it important to write files this way?

##### Answer
The two main goals in storing a file are minimizing time to read or write the file, and minimizing the amount of space it takes up. The block system itself makes the drive fast by making sure that read/write head of the hard drive doesn't have to jump around the disk too much, which is what takes the most time for communicating with a hard drive. By waiting to write to a block, it makes sure that it can put as much data as possible down at once. It also stops fragmentation from blocks that aren't full, which would waste space on the hard drive.
