//  C program to print pascal’s triangle

#include<stdio.h>
int main()
{
	int rows, num = 1, space, i, j;
	printf("\nEnter the number of rows : ");
	scanf("%d",&rows);
	printf("\n");

	for(i=0; i<rows; i++)
	{
		for(space=1; space <= rows-i; space++)
			printf("  ");

		for(j=0; j <= i; j++)
		{
			if (j==0 || i==0)
				num = 1;
			else
				num = num * (i-j+1)/j;

			printf("%4d",num);
		}
		printf("\n\n");
	}

	return 0;
}
