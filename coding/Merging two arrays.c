#include <stdio.h> 
int main() 
{ 
int arr1[30], arr2[30], res[60]; 
int i, j, k, n1, n2; 
printf("\nEnter no of elements in 1st array :"); 
scanf("%d", &n1); 
for (i = 0; i < n1; i++) 
{ 
printf("\nEnter element %d :", i+1); 
scanf("%d", &arr1[i]); 
} 
printf("\nEnter no of elements in 2nd array :"); 
scanf("%d", &n2); 
for (i = 0; i < n2; i++) 
{ 
printf("\nEnter element %d :", i+1); 
scanf("%d", &arr2[i]); 
}// Merging starts 
for (i = 0; i < n1; i++) 
{ 
res[i] = arr1[i]; 
} 
for (i = 0, k = n1; k < (n1 + n2) && i < n2; i++, k++) 
{ 
res[k] = arr2[i]; 
} 
printf("\n after merging \n"); 
for (i = 0; i < n1 + n2; i++) 
{ 
printf("%d ",res[i]); 
} 
return 0; 
}
