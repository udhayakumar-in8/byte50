#include<stdio.h>
int function(int, float);

int function(int n, float k)
{
    int l = n + k;
    
    return l;
}
 int main(void)
 {
     int (*mem)(int,float);
     mem = function;
     
     int ret=mem(5, 7.4);
     
     printf("Return Result=%d", ret);
     
 }