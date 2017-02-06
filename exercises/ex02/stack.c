/* Example code for Think OS.

Copyright 2014 Allen Downey
License: GNU GPLv3

*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int *foo() {
    //Returns pointer to integer array
    int i;
    int array[SIZE]; //Allocated in stack

    printf("%p\n", array);

    for (i=0; i<SIZE; i++) {
	array[i] = 42;
    }
    return array; //Returns pointer to array which will
                  //be deleted after foo runs
}

void bar() {
    int i;
    int array[SIZE]; //different array from foo, same address

    printf("%p\n", array);

    for (i=0; i<SIZE; i++) {
	array[i] = i; //Index of place where pointer is
    }
}

int main()
{
    int i;
    int *array = foo(); //array of length 5
    bar();

    for (i=0; i<SIZE; i++) {
	printf("%d\n", array[i]);
    }

    return 0;
}
