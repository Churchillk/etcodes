#include<stdio.h>
//structure fo an employe
	struct employee
	{
		char name[50];
		int hours[5];
	};
		
int main()
{
	struct employee emp1;
	int t_h = 0;
	
	printf("enter the employees name: ");
	scanf("%s",emp1.name);
//this loop asks for the hours 5 times
	for (int i = 0; i < 5; i++)
	{
		if (i == 0)
		{
			printf("enter the number of hours worked in day 1: ");
			scanf("%d",&emp1.hours[i]);	
		}
		if (i == 1)
		{
			printf("enter the number of hours worked in day 1: ");
			scanf("%d",&emp1.hours[i]);	
		}
		if (i == 2)
		{
			printf("enter the number of hours worked in day 2: ");
			scanf("%d",&emp1.hours[i]);	
		}
		if (i == 3)
		{
			printf("enter the number of hours worked in day 3: ");
			scanf("%d",&emp1.hours[i]);	
		}
		if (i == 4)
		{
			printf("enter the number of hours worked in day 4: ");
			scanf("%d",&emp1.hours[i]);	
		}
	
	
	t_h += emp1.hours[i]; // adds the hours of the current day to the total hours
	}
printf("employee: %s\nworked for %d hours in the week\n",emp1.name, t_h);
return 0;	
}
