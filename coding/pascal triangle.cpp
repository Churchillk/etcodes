#include<stdio.h>
fun()
{
	printf("hello world\n");
	printf("hello world\n");
	printf("hello world\n");
	printf("hello world\n");
}
main()
{
	int rows,coef=1, space,i,j;
	/*coef is a variable used to store coefficientof the pascal triangle. 
		used to calculate the value of each element in the pascal triangle*/
	printf("enter number of rows: ");
	scanf("%d",&rows);
	for (i = 0; i < rows; i++)
	{
		for (space = 1; space <= rows-i; space++)
			printf(" ");
			for (j = 0; j <= i; j++)
			{
				if (j == 0 || i == 0)
				{
					coef = 1;
				}
				else
					coef = coef * (i - j + 1)/j;
					printf("%4d", coef);
				
			}
			printf("\n");
			
	}
}
