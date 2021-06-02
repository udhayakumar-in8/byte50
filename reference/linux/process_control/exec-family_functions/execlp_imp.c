#include<stdio.h>
#include<unistd.h>
int main()
{
    char *programName = "ls";
    char *arg1 = "--all";
    char *arg2 = "/home/udhay/";
      printf("execlp() System Function:\n");
       execlp(programName, programName, arg1, arg2, NULL);
}