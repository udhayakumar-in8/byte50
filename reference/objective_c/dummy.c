#include<stdio.h>
#define Warning(...) fprintf(stderr, __VA_ARGS__)
int main(int argc, char *argv[])
{
    int width = 2,num = 34567;
  printf("%s\n",__FILE__);
  printf("%u\n",__LINE__);
   Warning("%s %s: this program contains no useful code\n", argv[0],argv[1]);
}
