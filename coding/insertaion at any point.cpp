#include<stdio.h>
main()
{
	int size, position, array[100], element;
	printf("enter size of the array: ");
	scanf("%d",& size);
	for(int index = 0; index < size; index++)
	{
		printf("\nenter elements at index [%d]: ",index);
		scanf("%d",&array[index]);
	}
	printf("\nenter the index to which you want to insert the element: ");
	scanf("%d",&position);
	printf("\nenter the element you want to add: ");
	scanf("%d",&element);
	for(int index = size - 1; index >= position - 1; index--)
	{
		array[index + 1] = array[index];
	}
	array[position - 1] = element;
	for(int x = 0; x < size; x++)
	{
		printf("elements at index [%d] is %d\n", x, array[x]);
	}
}
