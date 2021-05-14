#include<stdio.h>
int main()
{
   int string1,string2;
  /* fscanf(stdin,"%d %d",&string1, &string2);
   printf("%d\n",string1);
   printf("%d\n",string2);*/
   float full_tank = 47.0; /* litres */
   float miles = 300;
   char miles_per_litre[80];
   sprintf( miles_per_litre,"Miles per litre= %2.3f", miles/full_tank);
   printf("%s ",miles_per_litre);
}