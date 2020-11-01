#include<stdio.h>

struct devices 
{
   int  device_no;
   char *device_name[25];
};

int main(void)
{
    struct devices d1;
    d1.device_no = 121;
    d1.device_name = "harry";
    printf("device-id = %d deviceName = %s\n", d1.device_no, d1.device_name);
}