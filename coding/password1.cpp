#include<stdio.h>
#include<string.h>
int main()
{
	char p1[100];
	char p2[100];
	int attempt,locked;
	
	printf("Set password: ");
	scanf("%s",&p1[100]);
	
	printf("\nenter password to login: ");
	scanf("%s",&p2[100]);
	int t = strcmp(p1, p2);
	if (t == 0)
	{
		printf("\nlogin successfull");
	}
	else
	{
				printf("\nwrong paswword you have 2 more attempt else the phone will be locked: ");
				scanf("%s",&p2[100]);
					if (t == 0)
						{
							printf("\nlogin successfull");
						}
 					
	else
			{
				printf("\nwrong paswword you have 1 more attempt else the phone will be locked: ");
				scanf("%s",&p2[100]);
					if (t == 0)
						{
							printf("\nlogin successfull");
						}
	else
	{
		printf("\nblocked");
	}
			}
	}

	return 0;
}
