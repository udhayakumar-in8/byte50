#include<stdio.h>
#include<string.h>

struct devices 
{
    int device_no;
    char device_name[25];
    int *p;
};

int main(void)
{
    struct devices d1;
    d1.device_no = 121;
    strcpy(d1.device_name,  "harry");
    d1.p = &d1.device_no;
    printf("device-id = %d deviceName = %s\n", d1.device_no, d1.device_name);
    printf("device-pointer = %d\n", *d1.p);
}