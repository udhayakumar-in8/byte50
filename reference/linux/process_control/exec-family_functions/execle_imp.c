 #include <unistd.h>
 #include<stdio.h>
 #include<errno.h>
int main(int argc, char **argv,char * env[]) {
  char *binaryPath = "/bin/bash";
  char *arg1 = "-c";
  char *arg2 = " echo " "visit: $HNAME:$PRT from your browser."" ";
  //char *const env[] = {"HNAME=www.linuxhint.com", "PRT=8080", NULL};
  printf("excle function execution\n");
  int erno = errno;
  printf("%d\n",erno);
  execle(binaryPath, binaryPath,arg1, arg2, NULL, env);
 
  return 0;
}