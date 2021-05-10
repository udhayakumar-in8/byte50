#include<stdio.h>
#include <stdlib.h>
int unrand(int (*new)(float),int n)
{
    int result = new(3.5);
    return result + n;

}
int tninerand(float n)
  {
      return (rand()%1000) + n;
  }
int main()
{
    printf("The main function call \n");
    //calling the function
    int result = unrand(&tninerand,42);
    printf("RESULT:%d",result);

}