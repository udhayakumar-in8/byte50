#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num, den;
    printf("Enter the   numerator and denominator\n");
    scanf("%d%d",&num,&den);
    div_t var;
    var = div(num, den);
    printf("Answer: reminder :%d\n \t Quotiont=%d\n", var.rem, var.rem);
    return 0;
}