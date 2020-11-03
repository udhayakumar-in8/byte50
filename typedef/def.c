
#include<stdio.h>

#define SIZE 10

int main(void)
{
    char array[SIZE];
    scanf("%s", array);
    printf("%s\n", array);
    // undef macro
 #undef SIZE
    // integer array declaration
    int i, array1[SIZE];
    for (i = 0 ; i < 2 ; i++)
    {
        scanf("%d", &array1[i]);
    }
    //printing integer array
    for (i = 0; i < 2 ; i++)
    {
        printf("%d", array1[i]);
    }
}