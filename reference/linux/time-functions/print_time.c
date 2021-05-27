#include<stdio.h>
#include<time.h>
int main()
{
     struct tm t1;
     char *k = asctime(&t1);
     printf("%s\n",k);

    printf ("seconds %u\n", t1 . tm_sec);    /* Seconds (0-60) */
    printf ("Minutues %u\n",t1.tm_min);    /* Minutes (0-59) */
    printf ("hour %u\n",   t1.tm_hour);   /* Hours (0-23) */
    printf ("Day of Month %u\n", t1.tm_mday);   /* Day of the month (1-31) */
    printf ("Month %u\n", t1.tm_mon);    /* Month (0-11) */
    printf ("Year %u\n", t1.tm_year);   /* Year - 1900 */
    printf ("Day of Week %u\n", t1.tm_wday);   /* Day of the week (0-6, Sunday = 0) */
    printf ("Day in the year %u\n", t1.tm_yday);   /* Day in the year (0-365, 1 Jan = 0) */
    printf ("Daylight saving %u\n", t1.tm_isdst); 
}