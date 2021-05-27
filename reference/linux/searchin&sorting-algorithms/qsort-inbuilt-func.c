#include<stdio.h>
#include<stdlib.h>
int cmp(const void *p1,const void* p2)
{
    return ( *(int*)p1 - *(int*)p2 );
}
int main()
{
    int i = 0 ;

    int array[]={12, 4, 6, 31, 78, 12};
   int size = sizeof array /sizeof array[0];

    while(i<size)
    printf("%d ",array[i++]);
    printf("\n");
    qsort(array, size, sizeof(int),cmp);

    

    i = 0;
    while(i<size)
    printf("%d ",array[i++]);
    printf("\n");
}