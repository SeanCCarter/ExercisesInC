#include <ctype.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>

/* tee: reads file character by character, and
 *       outputs to a file, and the stdout
 * out_file: pointer to open file where writing
 *           should occur
 * returns: exit code
 */
void tee(FILE *out_file){
  char character;
  //While there is still input, keep writing to out file
  while (fscanf(stdin, "%c", &character) != -1){
    fprintf(out_file, "%c",character);
    fprintf(stdout, "%c",character);
  }
}

/* main: prevents ^C from closing the program
 *       and instead letting it stop gracefully
 *       as stdin ends
 * sig_num: integer representing what command line
 *          signal was used.
 * returns: nothing
 */
void sigintHandler(int sig_num){
    /* Do nothing, then reset the handler */
    signal(SIGINT, sigintHandler);
}

/* main: reads args, calls tee() on appropriate file
 * argc: the number of command line arguments
 * argv: the values of command line arguments
 * returns: exit code
 */
int main (int argc, char* argv[]) {
  char ch;
  int append = 0;
  opterr = 0;
  FILE *out_file;

  //Iterate through all of the flags
  while ((ch = getopt(argc, argv, "ai")) != -1){
    switch(ch){
    case 'a': //set flag to open file for appending
      append = 1;
      break;
    case 'i': //Set up handler for interrupts
      signal(SIGINT, sigintHandler);
      break;
    case '?': //Someone misused the program
      if (isprint(optopt)){
        fprintf(stderr, "Unknown option %c\n", optopt);
      }
      else{
        fprintf(stderr, "Unknown option character, could not print.\n");
      }
      return -1;
      break;
    default: //someone really misused the program
      fprintf(stdout, "%s", "Flag not recognized");
      fprintf(stderr, "%i", -1);
      return -1;
    }
  }

  //Check to see if a flag was used, open file appropriately
  if (append){
    out_file = fopen(argv[argc-1], "a");
  }
  else{
    out_file = fopen(argv[argc-1], "w");
  }

  tee(out_file);
  fclose(out_file);
  return 0;
}
/*
Planning:
  What pieces do I need?
    - Read in the file
    - write to a file
    - write to standard out
    - read command line arguments
    - modify writing based on flags
    - find way to prevent file from closing with -i

Reflection:
  Identifying what I thought were the pieces was a
  really good way of identifying exactly what I needed
  to google. I really did end up doing this mostly by
  the plan - first, I took input in and wrote it to another
  file. Then, when writing to stdout, I realized that it
  would work better character by character than line by
  line. Finishing one element at a time made me thing about
  each thing that I wrote multiple times, untill I didn't
  feel like it needed modification any more. Next time, I
  think I would pay more attention to the first pieces before
  moving on - I was more careless about how I read in data
  than I realized.

Comparison to actual tee:
  - The profestional code impliments a few more command line
    flags, a couple of which I don't fully understand.
  - There was an enourmous amount of error handling code,
    covering some errors that I didn't know existed.
  - They allowed long arguments
  - The comments weren't actually very detailed. I think
    they assumed anyone reading it would have a very thourough
    grasp of c.
*/
