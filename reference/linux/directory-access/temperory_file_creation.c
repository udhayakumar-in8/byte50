#include <stdio.h>
int main()
{
    FILE *fp = tmpfile();
    if(fp == NULL)
      printf("fail the tempfile creation\n");
    printf("success\n");
}