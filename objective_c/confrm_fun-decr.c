#include<stdio.h>
int fun()
{
    printf("function received\n");
    printf("%d\n",asm("eax"));
    return 0;
}
int main()
{
    printf("this is main function");
    fun(11);
}