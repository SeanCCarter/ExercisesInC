#include <stdio.h>
int main()
{	
	int x = 5;
	int y = x + 1;
    printf("%d", y);
}

/* Optimization comments:
- Adding "int x = 5;" to the code showed up as
  storing a value in the assembly code, but that
  wasn't visible in the assembly code after 
  optimization
- Printing x showed up the same way in the assembly
  code, except that the printf call had a refference
  to the place where x seemed to be stored. After
  optimization, the code still stored the x value
  (although it used a different printing function)
- Adding "int y = x + 1;", and printing y, made it 
  clear that the code stored x, added it to 1, and
  then stored that somewhere else. However, the 
  optimized code seemed to just store the value 6
- It seems that the optimizer gets rid of any unused
  values, and also performs any calculation that it
  can ahead of time (probably just because x can't
  change before the y assignment uses it)
*/