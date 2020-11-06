/* C program to demonstrate working of variable arguments to find average 
 of multiple numbers. ref:https://www.eskimo.com/~scs/cclass/int/sx11b.html*/
#include <stdarg.h> 
/* This header file is required in any file which uses the variable 
argument list (va_) macros. */
#include <stdio.h> 
  
int average(int num, ...) 
{ 
    va_list valist; 
  
    int sum = 0, i; 
  
    va_start(valist, num); 
    
    for (i = 0; i < num; i++)
    {
        sum += va_arg(valist, int); 
    }
    va_end(valist); 
  
    return sum ;
} 
  
int main() 
{ 
    printf("Average = %d\n",  average(2, 3, 4)); 
    printf("Average  = %d\n", average(3, 5, 10, 15)); 
    return 0; 
} 