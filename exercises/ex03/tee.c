#include <ctype.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

void tee(){

}

int main (int argc, char* argv[]) {
  char character;
  char ch;
  opterr = 0;
  FILE *out_file;

  while ((ch = getopt(argc, argv, "ai")) != -1){
    switch(ch){
    case 'a':
      fprintf(stdout, "%s", "case a\n");
       out_file = fopen(argv[argc-1], "a");
      break;
    case 'i':
      fprintf(stdout, "%s", "case i\n");
    case '?':
      if (isprint(optopt)){
        fprintf(stderr, "Unknown option %c\n", optopt);
      }
      else{
        fprintf(stderr, "Unknown option character, could not print.\n");
      }
      return -1;
      break;
    default:
      fprintf(stdout, "%s", "Flag not recognized");
      fprintf(stderr, "%i", -1);
    }
  }

  //While there is still input, keep writing to out file
  while (fscanf(stdin, "%c", &character) != -1){
    fprintf(out_file, "%c",character);
    fprintf(stdout, "%c",character);
  }
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
*/
