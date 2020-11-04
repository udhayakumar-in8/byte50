// macro contionuation

#include<stdio.h>
//define a continues macro
/*#define  message_for(a, b)  \
   printf(#a " and " #b ": We love you!\n")*/
   
#define mellow(b,c) { \
    printf(#b #c "\n"); \
    printf("This is " #b #c " Byte50\n");\
  }

int main(void)
{
    printf("main-function-message\n");
    //message_for(hello, world);
    
    mellow(hello, world);

}