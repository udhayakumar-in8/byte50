#include<stdio.h>

int main(void)
{
     const char *a = "5.7";
    float l;
    sscanf (a,"%f",&l);
    printf ("%f",l);
}