#include<stdio.h>
#include<unistd.h>
#include<errno.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
extern int errno;
  
int main(int argc, const char *argv[]) {

    int fd = access("sample.txt", F_OK);
    if(fd == -1){
            printf("Error Number : %d\n", errno);
        perror("Error Description:");
    }
      fd = access("sample.txt",  X_OK && R_OK && W_OK);
    if(fd == -1){
        printf("Error Number : %d\n", errno);
        perror("Error Description:");
    }
    else{
        printf("that file have enough permission's to user\n");
    }
    return 0;
}