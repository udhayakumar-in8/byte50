#include <stdio.h>
#include <stdlib.h>


int cmpfunc(const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int values[] = { 0, 31, 67, 34,7, 56 };

int main () {
   int *item;
   int key ;
   printf("enter the key element you want\n");
   scanf("%d", &key);

   item = (int*) bsearch (&key, values, 5, sizeof (int), cmpfunc);
   if( item != NULL ) {
      printf("Found item = %d\n", *item);
   } else {
      printf("Item = %p could not be found\n",item);
   }
   
   return(0);
}