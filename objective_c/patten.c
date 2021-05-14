#include<stdio.h>
int main()
{
	int i;
	printf("%-*.10s", 8, "1234567890123");
	printf("%-*s", 8, "abc");
}
