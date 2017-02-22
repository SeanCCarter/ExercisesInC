#include <stdio.h>
#include <stdlib.h>


int main (int argc, char* argv[]) {
  char line[256];
  FILE *in_file = fopen(argv[1], "r");
  FILE *out_file = fopen(argv[2], "w");
  while (fscanf(in_file, "%255[^\n]\n", line) == 1){
    fprintf(out_file, "%s\n",line);
    fprintf(stdout, "%s\n",line);
  }
  return 0;
  fclose(in_file);
  fclose(out_file);
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
