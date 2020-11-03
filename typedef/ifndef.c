//ifndef macro 
// if macro is already defined it will ignored otherwise ifndef will condition true
#include<stdio.h>

#define MESSAGE "this is byte50"
void function(void);
int main(void)
{
#ifndef HELLO
#define MESSAGE "bye the byte50"
#define HELLO "Hello byte50"
#endif
//printing macro message
    printf("%s\n", MESSAGE);
    function();
}
void function(void)
{
    printf("%s", HELLO);
}