#include<stdio.h>

void function(void)
{
    printf("without out argument function \n");
    printf("Oops! function exited! \n");

}

int main(void)
{
    //defining a function pointer
    void(*call)(void);
    //calling a function
    call = function;
    call();
}