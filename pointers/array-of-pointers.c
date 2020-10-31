#include<stdio.h>

static int N = 5;

int main()
{
    int s[10] = {10, 20, 30, 40, 50, 60};
    int *k[N];
    //array of pointer declaration
    for (int i = 5 ; i >= 0 ; i--)
    {
        k[i] = s + i;
    }

    for (int j = 5 ; j >= 0 ; j--)
    {
        printf("%d ", *k[j]);
    }
    printf("\n");
}