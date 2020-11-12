#include<stdio.h>
int function2(void);
int function1(int(*fptr)(void));
int main(void)
{
    printf("----main_function----\n");
    int(*fptr)(void);
    fptr=function2;
    printf("Function_Return_returalue = %d \n", function1(fptr));
    printf("----main_function_completed----\n");
}
int function1(int(*fptr)(void))
{
    printf("function1 message----->\n ");
    return fptr();
}
int function2(void)
{
    printf("callback function2 _message------> \n");
    return 342;
}