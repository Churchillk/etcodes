#include<stdio.h>
int main()
  {
int el; 
int a,b,c,d,e,f,g,h,i;
 int A,B,C,D,E,F,G,H,I; 
int P1,P2,P3,P4,P5,P6,P7,P8,P9; 
printf("enter elements in the first  row matrix\n");
 for(i = 0; i < 3; i++)
    {
 printf(">>>"); 
scanf("%d",&el); 
if (i == 0)a = el; 
if (i == 1) b = el;
 if (i == 2) c = el;
    } 
printf("%d %d %d\n", a, b, c);
printf("enter the elements in the second row\n");
 for(i = 0; i < 3; i++)
{
    printf(">>>");
    scanf("%d",&el);
if (i == 0)  d = el; 
if (i == 1)   e = el;
if (i == 2)  f = el; 
}
printf("%d %d %d\n%d %d %d\n",a,b,c, d, e, f);
printf("enter the elements in the third row");
for(i = 0; i < 3; i++)
{
    printf(">>>");
    scanf("%d",&el);
if (i == 0)  g = el; 
if (i == 1)  h = el;
if (i == 2)  i = el; 
}
printf("%d %d %d\n%d %d %d\n%d %d %d\n",a,b,c, d, e, f,g,h,i);
printf("enter the elements in the first row of second matrix\n");
 return 0;
}
