#include<stdio.h>
#include<stdlib.h>
int main()
{
char *str1 = "100";
char *str2 = "55.444";
char *str3 = "      1234";
char *str4 = "123four";
char *str5 = "invalid123";

int i;
float f;
printf("%d\n", atoi(str1));
printf("%d\n", atoi(str2));
printf("%d\n", atoi(str3));
printf("%d\n", atoi(str4));
printf("%d\n", atoi(str5));
}