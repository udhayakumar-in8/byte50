 // finding the  two files having same inode numbers
#include <stdio.h>
#include<stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
int main(int argc,char ** argv)
{
  if(argc < 3)   {
        printf("Oops! USAGE : FileName1 FileName2\n");
        exit(0);
      } 
      
     struct stat file_stat;
     //opening file in first argument
     stat(argv[1], &file_stat);
     
    // fstat(fd, file_stat);
     printf("the inode number is : %lu\n", file_stat.st_ino );
     printf("File Permissions :  ");
    printf( (S_ISDIR(file_stat.st_mode)) ? "d" : "-");
    printf( (file_stat.st_mode & S_IRUSR) ? "r" : "-");
    printf( (file_stat.st_mode & S_IWUSR) ? "w" : "-");
    printf( (file_stat.st_mode & S_IXUSR) ? "x" : "-");
    printf( (file_stat.st_mode & S_IRGRP) ? "r" : "-");
    printf( (file_stat.st_mode & S_IWGRP) ? "w" : "-");
    printf( (file_stat.st_mode & S_IXGRP) ? "x" : "-");
    printf( (file_stat.st_mode & S_IROTH) ? "r" : "-");
    printf( (file_stat.st_mode & S_IWOTH) ? "w" : "-");
    printf( (file_stat.st_mode & S_IXOTH) ? "x" : "-");
    printf("\n");
    printf("The file %s a symbolic link\n\n", (S_ISLNK(file_stat.st_mode)) ? "is" : "is not");
}
