#include<stdio.h>
#include "myprintf.c"
void myprintf(const char *fmt, ...);
int main(void)
{
 myprintf("%s", 'S');
}
