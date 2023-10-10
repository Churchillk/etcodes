#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<string.h>
int main()
{
	char string1[] = "efgyurtf785tjr5gh.";
    char string2[] = "hello world";


strncpy(string1, string2, 2);	 //copy string1 as string2
printf("%s\n", string1);
strupr(string2);
printf("%s\n",string2);
strlwr(string2);
printf("%s\n",string2);
strcat(string1, string2); 		//string concertination
printf("%s\n",string1);
strcpy(string1, string2);
printf("%s\n", string2);
strset(string1, 'c');			//sets all the characters to c
printf("%s\n",string1); 
strnset(string1, 'x', 3);		//sets first n characters of a string to a given charactaer
printf("%s\n",string1); 
strrev(string1);				//reverses a string
printf("%s\n",string1); 

//int r = strlen(string1); 		// return length of a string as a number
//printf("\n%d", r);
int r = strcmp(string1, string2); // compares if the strings are the same
if (r == 0)
{
	printf("True");
}
else //strncmp compares a specific letter in the strings
	//strcmpi ignorees case
{
	printf("False");
}
}


