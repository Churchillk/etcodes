#include<stdio.h> 
#include<string.h>
#include<math.h> 
#include<windows.h>
int k; 
double sin(),cos(); 
int main() 
{ 
system("color 0A");
	float A = 0, B = 0, i, j, z[1761]; 
	char b[1760]; 	
printf("\n\x1b[2J"); 	
  for(;;) 	
{ 		
memset(b, 32, 1760); 		
memset(z, 0, 7040); 
	for(j = 0; 6.28 > j; j += 0.001) 	
  { 	
for(i = 0; 6.28 > i; i += 0.004) 
	{ 		
float c = sin(i), d = cos(j), e = sin(A), f = sin(j), g = cos(A), 		
      h = d + 2, D = 1 / (c * h * e + f* g + 5), l = cos(i),
    	 m = cos(B), n = sin(B), t = c * h * g - f * e; 	
    	 t = c * h * g - f * c; 		
int x = 40 + 30 * D * (l * h * m - t * n); 		
int y = 12 + 15 * D * (l * h * n + t * m), o = x + 80 * y, 		 
N = 8 * ((f * e - c * d * g) * m - c * d * e - f *g -l * d * n); 	
  if(22 > y && y > 0 && 80 > x && x > 0 && D > z[o]) 
	{ 		
z[o] = D; 
b[o] = ".,-~:;=!*#$@:"[N > 0 ? N : 0]; 
	 } 	 
   } 	 	 
   printf("\x1b[H"); 	 
for(k = 0; 1761 > k; k++) 	 	
putchar(k % 80 ? b[k] : 10);
 	 A += 0.04;
 	 B += 0.02;
 	} 
}
 }
