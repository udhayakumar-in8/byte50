#include <stdio.h>

int main( void )
{
    unsigned char k=255;

    for(int i=31;i>=0;i--){

      printf( "%d " ,k>>i&1);

       if(i%8== 0)
       printf(" ");


   }
printf("\n");
}