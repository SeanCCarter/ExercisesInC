/* Example code for Think OS.

Copyright 2014 Allen Downey
License: GNU GPLv3

*/

#include <stdio.h>
#include <stdlib.h>

int global;

int main ()
{
	int local1 = 5;
	int local2 = 6;
    void *p1 = malloc(128);
    void *p2 = malloc(128);
    void *chunk1 = malloc(17);
    void *chunk2 = malloc(17);

    printf ("Address of main is %p\n", main);
    printf ("Address of global is %p\n", &global);
    printf ("Address of local1 is %p\n", &local1);
    printf ("Address of local2 is %p\n", &local2);
    printf ("Address of p1 is %p\n", p1);
    printf ("Address of p2 is %p\n", p2);
    printf ("Address of chunk1 is %p\n", chunk1);
    printf ("Address of chunk2 is %p\n", chunk2);
    
    return 0;
}
