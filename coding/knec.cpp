#include<stdio.h>
#include<string.h>
struct student
{
	char name[100],subcountry[100];
	int DOB[];
	float weight[],height[];
	
};
int main()
{
	int i;
for(i = 0; i <= 100; i++)
{
	struct student std[i];
		printf("enter students %d name: ",i + 1);
		fgets(std[i].name, 100, stdin);
		std[i].name[strlen(std[i].name)-1] = '\0';
		printf("\nenter students age: ");
		scanf("%d",&std[i].DOB[i]);
		printf("\nenter students subcountry: ");
		scanf("%s",&std[i].subcountry[i]);
		printf("\nenter students weight and height: ");
		scanf("%f %f",&std[i].weight,&std[i].height[i]);
		printf("\n hello %s you are %d years old and you are from %s. you are %1f kg and %1f tall\n ",std[i].name,std[i].DOB,std[i].subcountry,std[i].weight,std[i].height);
}
printf("%d",std[1].DOB[1]);
	return 0;
}
