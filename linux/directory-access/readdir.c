#include<stdio.h>
#include <sys/types.h>
#include <dirent.h>
int main()
{
    // opendir function
    DIR *dr = opendir(".");
    if (dr == NULL)  // opendir returns NULL if couldn't open directory
    {
        printf("Could not open current directory" );
        return 0;
    }
    // define structure entry point
     struct dirent * de;
    while((de =readdir(dr))!= NULL ) {
      switch(de -> d_type)
      {
            case DT_BLK     :  printf("%lu , File :%s\n", de -> d_ino, de -> d_name);
                               printf("This is a block device.:");
                                   break;
            case DT_CHR     :   printf(":%lu , File :%s\n", de -> d_ino, de -> d_name);
                                printf("This is a character device.:");
                                  break;
            case DT_DIR     :   printf(":%lu , File :%s\n", de -> d_ino, de -> d_name);
                                printf(" This is a directory.:");
                                break;
            case DT_FIFO    :   printf(" :%lu , File :%s\n", de -> d_ino, de -> d_name);
                                printf("This is a named pipe (FIFO).:");
                                  break;
            case DT_LNK     :  printf(" :%lu , File :%s\n", de -> d_ino, de -> d_name);
                               printf(" This is a symbolic link.:");
                                  break;
            case DT_REG     :  printf(":%lu , File :%s\n", de -> d_ino, de -> d_name);
                               printf(" This is a regular file.:");
                               break;
            case DT_SOCK    : printf(":%lu , File :%s\n", de -> d_ino, de -> d_name);
                              printf("This is a UNIX domain socket.:");
                              break;
            case DT_UNKNOWN : printf(":%lu , File :%s\n", de -> d_ino, de -> d_name);
                              printf(" The file type could not be determined.:");
                              break;
       }
    }    
    closedir(dr);
}