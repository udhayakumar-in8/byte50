#include<stdio.h>
#include<unistd.h>
int 
   main()
{ 
   printf("execl System Function:\n");
   /*
     first ,and second argument is path
   */
       const char *binary_path = "/bin/ls";
       const char * arg1 = "-lh";
       const char * arg2 = "/home";
		execl(binary_path, binary_path, arg1, arg2,NULL);

       
      printf("program completed\n");
}