#include<stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
    printf("main Thread");
    srand(time(0));
    time_t timevar;
    printf("time function retruns %ld",time(&timevar));
    int i;
    for(i=0 ; i < 5 ;i++)
      printf("%d\n", (rand()/100000));
}