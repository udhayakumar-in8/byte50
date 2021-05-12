#include<stdio.h>
int main()
{
  FILE * fp;
   fp=fopen("test-case.txt","w");
   if(fp == NULL)
      printf("file open failed!\n");
      int i,n = 5;
      char str[50];
       for (i = 0; i < n; i++)
    {
        puts("Enter a name");
        scanf("%[^\n]%*c", str);
        fprintf(fp,"%d.%s\n", i, str);
    }
    fclose(fp);

}