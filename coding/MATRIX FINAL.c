#include<stdio.h> 
#include<stdlib.h> 
#include<math.h> 
#define pos +1
#define neg -1
int main() 
{ 
int a,b,c,d,e,f,g,h,i; 
int k,el,input,RDET; 
char op; 
int M1,M2,M3; 
int det1,det2,det3,det4,det5,det6,det7,det8,det9; 
int comp1,comp2,comp3,comp4,comp5,comp6,comp7,comp8,comp9;
printf("STEP1: OBTAIN THE MINORS\n"); 
printf("Enter the matrix in the form \na   b   c \nd   e   f \ng   h   i \n\n"); 
   for(k = 0; k < 9; k++)
 { 
printf(">>>>"); 
scanf("%d",&el); 
if(k==0) a = el; 
if(k==1) b = el; 
if(k==2) c = el; 
if(k==3) d = el; 
if(k==4) e = el; 
if(k==5) f = el; 
if(k==6) g = el; 
if(k==7) h = el; 
if(k==8) i = el; 
} 
printf("%d %d %d\n%d %d %d\n%d %d %d\n",a,b,c,d,e,f,g,h,i); 
det1 = (e * i) - (f * h); 
det2 =(d * i) - (f * g); 
det3 = (d * h) - (e * g); 
det4 =(b * i) - (c * h); 
det5 =(a * i) - (c * g); 
det6 =(a * h) - (b * g); 
det7 =(b * f) - (c * e); 
det8=(a * f) - (d * c); 
det9 =(a * e) - (d * b); 
printf("SHIFT THE MAJOR MATRIX:>>>\n%d %d %d\n%d %d %d\n%d %d %d\nWITH THIS MINOR MATRIX>>>\n %d %d %d\n %d %d %d\n %d %d %d\n",a,b,c,d,e,f,g,h,i,det1,det2,det3,det4,det5,det6,det7,det8,det9); 
printf("NOW WE COMPUTE THE CO-FACTOR BY MULTIPLYING THE OPERETOR SIGNS WITH THE MINOR MATRIX\n + - +\n - + -\n + - +\n"); 
printf("THAT IS>>>>:\n+    -    +               %d   %d   %d\n-    +    -  MULTIPLY BY  %d   %d   %d\n+    -    +               %d   %d   %d\n\n\n",det1,det2,det3,det4,det5,det6,det7,det8,det9); 
comp1 = pos * det1;
comp2 = neg * det2;
comp3 = pos * det3;
comp4 = neg * det4;
comp5 = pos * det5;
comp6 = neg * det6;
comp7 = pos * det7;
comp8 = neg * det8;
comp9 = pos * det9;
printf("  %d     %d     %d\n  %d     %d     %d\n  %d     %d     %d\n",comp1,comp2,comp3,comp4,comp5,comp6,comp7,comp8,comp9);
/*FROM  HERE IS FINDING THE DETERMINANT*/
printf("THAT IS---|>  (%d  %d  %d) *  (%d  %d  %d)\n\n",a,b,c,det1,det2,det3);
M1 =  a * det1;
M2 = b * det2;
M3 = c * det3;
RDET/*real deteinant*/=M1 + M2 + M3;
printf("THE DETERMINANT IS  (%d   +   %d   +   %d)  =  %d",M1,M2,M3,RDET);
return 0; }