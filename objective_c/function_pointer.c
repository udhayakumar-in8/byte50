/* A void pointer can hold address of any data type (except function pointer). 
 We cannot operate on the object pointed to by void pointer,as the type is unknown.
 We can use a void pointer to compare with another address  */

#include<stdio.h>
void fun2(int k)
{
    printf("This 2 function it's passing: %d\n",k);
    printf("2 function is completed\n");

}
void fun(int k)
{
    printf("1 func started\n..");
    printf("function received value is %d\n",k);
}
int main()
{
    
    /*void (*fpointer)(int) = &fun;
       //fpointer=fun;
       (*fpointer)(10);

      // void (*fpointer)(int);
       fpointer=fun;
       fpointer(10); 
    printf(" program completed\n");
     
*/
    // Array of function pointer
   // here the issue is diffrent arguments of function can't passible to pass as a argument   
    void(*Arrayfun[4])(int);
    Arrayfun[0] = fun;
    Arrayfun[1] = fun2;
    printf("array of fun pointer called..\n");
    Arrayfun[0](12);
    Arrayfun[1](21);
    printf("main function complete\n");
}
