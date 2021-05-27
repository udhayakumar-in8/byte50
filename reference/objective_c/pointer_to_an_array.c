// pointer to an array(pointing to an completing array)
#include<stdio.h>
int main()
{
    int (*a)[3];
    int j[][3] = {12, 13, 14, 15, 16, 78, 65, 20,47};

    a=j;
    printf("%d\n",*(*(a+0)+0));
}