#include<stdio.h>


/*#ifdef TURBOC
   #define INT_SIZE 16
#else
   #define INT_SIZE  32
#endif */

/* #if SYSTEM == MSDOS
  #include <stdio.h>
#else
  #include "default.h"
#endif */

#ifdef OS_MSDOS
  #include <msdos.h>
#elifdef OS_UNIX
  #include "default.h"
#else
  #error "Wrong OS!"
#endif

int main()
{
	printf("preprocessor stage\n");
	return 0;
}
