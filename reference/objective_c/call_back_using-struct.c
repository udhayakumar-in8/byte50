#include<stdio.h>
#include<string.h>
//simple appid with some string
typedef struct msg {
    int appid;
     char a[];

}msdid;

void print(msdid *msgid)
{
   printf("msgid : %d\n",msgid -> appid);
   printf("msgdate:%s\n",msgid -> a);
}


void (*pf)(msdid *);

int main()
{
    msdid msddata;
    msddata.appid = 101;
    strcpy(msddata.a,"SAMSUNG SMART TAG");
    // function pointer declaration
   // int (*pf)(int *ref);
    // passing the function address // hiding the information
    pf = print;

    print(&msddata);
    
    return 0;
}