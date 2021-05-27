#define _DEFAULT_SOURCE
#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
   {
     struct dirent **namelist;
	 char *directory_path;
	 if(getwd(directory_path) == 0) {
		printf("Error fetch directory");
		exit(EXIT_SUCCESS);
	 }
     int n = scandir(directory_path, &namelist, NULL, alphasort);
           if (n == -1) {
               perror("scandir");
               exit(EXIT_FAILURE);
           }

           while (n--) {
               printf("%s\n", namelist[n]->d_name);
               free(namelist[n]);
           }
           free(namelist);

           exit(EXIT_SUCCESS);
        }
