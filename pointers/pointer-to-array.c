#include<stdio.h>

int main(void)

{
  char arr[10]={};

  for(int i=45;i<55;i++)
  arr[i-45]=i;

   printf("\n");

  for(int i=0;i<10;i++)
  printf( "%d " ,arr[i] );

  printf("\n");

  //pointer to an integer declaring and intailzing
  char (*p)[5]=arr;

  //printing values
  for( int i=0;i<10;i++)
  printf( "%d  " ,*(*p+i) );

}