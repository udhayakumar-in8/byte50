#include<stdio.h>
#include<string.h>
int main()
{
    //char str1[] = "humming word that code happen";
    char *str1 = "Hello Big Boy";
    char *t1;


for (t1 = strtok(str1," "); t1 != NULL; t1 = strtok(NULL, " ") )
    printf("%s\n",t1);
    int s;
    delete s;
}