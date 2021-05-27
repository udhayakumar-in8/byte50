#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(int argc, char *argv[])
{
    if (argc < 3) {
        printf("usage: oldFILE, new File");
        exit(0);
    }
    int re = link(argv[1], argv[2]);
    if (re == -1) {
       perror("link"); 
     }
     

}