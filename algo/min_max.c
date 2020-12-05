#include<stdio.h>
int main()
{
    int array[20]={12,35,3,4,56,14,34,89.40,60,52,54,50,78,20,19,23,20,253,1};
    int max = 12;
    int min = 35;
    for(int i=0; i<19; i++)
    {
        if(array[i] < min)
          min = array[i];
        if(array[i] > max)
          max = array[i];
    }
 printf("min_maxmum_value %d %d", min, max);
}