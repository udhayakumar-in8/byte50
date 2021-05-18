#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
int main(int argc, char **argv)
{
    if ( argc < 2 ) {
    printf("Usage: %s <pathname>\n",argv[0]);
    exit(1);
	}

    if (chdir(argv[1]) != 0) { 
    printf("Error in chdir");
	exit(1);
	}
    char s[100];

	 //printing current working directory
	printf("%s\n", getwd(s));

    printf("string:%s",s);

}