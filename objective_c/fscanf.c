#include<stdio.h>
int main()
{
    FILE* ptr = fopen("test-case.txt","r");
    if (ptr==NULL)
    {
        printf("no such file.");
        return 0;
    }
  
    /* Assuming that abc.txt has content in below
       format
       NAME    AGE   CITY
       abc     12    hyderbad
       bef     25    delhi
       cce     65    bangalore */
       /* Normally % *s purpose is ignore the spaces until data "%*s"
           in this program above test case.txt 
            the coloumn is there name age city which coloumn you want 
            based on fetch the data using (i.e second data means use
            %*s %s %*s if third one like below statement
       */
    char buf[100];
    while (fscanf(ptr,"%*s %*s %s ",buf)==1)
        printf("%s\n", buf);
  
    return 0;
}