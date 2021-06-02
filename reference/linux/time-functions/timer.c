 
#include <stdio.h>
#include <sys/types.h>
#include <time.h>
 
int main()
  {  int i;
	time_t t1,t2;
 
	time(&t1);
	for (i=1;i<=10;++i)
	   printf("%d %d %d\n", i, i*i, i*i*i);
	 time(&t2);
		printf(" \n Time to do 300 squares and cubes= %ld seconds \n", (int)t2-t1);
  }