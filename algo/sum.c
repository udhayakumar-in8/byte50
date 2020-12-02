#include<stdio.h>
int findsum(int);
int main(void)
{
	printf("main-function\n");
	printf("%d\n", findsum(17));
	printf("Oops!program Exited\n");
}
int findsum(int N) 
{
	int sum;
	return sum = N * (N + 1) / 2;
}
/* int findsum(int s1) 
{
	printf("sum function\n");
    int sum = 0;
    for (int v = 1; v <=s1; v++) {
        sum += v;
    }
    return sum;
}*/

