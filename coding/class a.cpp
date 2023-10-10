/*#include<stdio.h>
#include<string.h>
struct members
{
	char name[100];
	int age,adm,attendance;
};

int main()
{

	struct members student1;
		for(int i = 0; i < 5; i++)
		{
	printf("\nenter student\'s %d name: ",i+1);
	//scanf("%s",student1.name);
	fgets(student1.name, 100, stdin);
	student1.name[strlen(student1.name)-1] = '\0';
	printf("hello %s\n",student1.name);
		}
	printf("%s",student1.name[2]);

	return 0;
}*/

#include<stdio.h>
#include<ctype.h>
int main()
{
	char name[100];
	printf("enter students name: ");
	scanf("%s",&name);
	name = toupper(name);
	printf("%s",name[100]);
	return 0;
}
