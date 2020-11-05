#include<stdio.h>

#define KEIL "message me"

//condition compliation check
#if defined(KEIL)
#define KEIL "message modifed"
#endif
//printing main message
int main(void)
{
    printf("this byte50-main function\n");
    printf("Acutal Message %s \n", KEIL);
}