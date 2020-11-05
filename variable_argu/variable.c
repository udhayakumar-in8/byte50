#include<stdio.h>
//varible lenth function declaration
int var_function(int rece, ...)
{
    /* while manipulating the variable-length argument list and  The type of 
    the variable is va_list, a special type defined for us by <stdarg.h>.*/
    va_list var_conf;
    
     /*line initializes var_conf and initiates the processing of the argument list*/
    va_start(var_conf,rece);
    //heart to variable length arguments
    
    
}
int main(void)
{
    printf("variablel_length_arguments = %d\n", var_function(3,1,3,5,7));
}