#include <stdio.h> 
int main(void)
 { 	
 int array[10]; 	
 int even[10]; 	
 int odd[10]; 	
 int numEvs = 0; 	
 int numOdds = 0; 	
 printf("Enter 10 numbers:\n"); 	 	
 // Read 10 numbers into an array 
for(int i = 0; i < 10; i++)
 { 		
 	scanf("%d", &array[i]); 	
} 	
// Check if each number is even or odd 	
for(int i = 0; i < 10; i++)
 { 		
 	if(array[i] % 2 == 0) 
	 { // Even 			
	 	even[numEvs] = array[i]; 			
		numEvs++; 		
	} else 
	{ // Odd 			
		odd[numOdds] = array[i]; 			
		numOdds++; 		
	} 	
	} 	
	// Print out Evens 	
	printf("\nEven numbers: "); 	
	for(int i = 0; i < numEvs-1; i++) 
	{ 		
		printf("%d, ", even[i]); 	
	} 	printf("%d\n", even[numEvs-1]); // Print out Odds 	
	printf("Odd numbers: "); 	
for(int i = 0; i < numOdds-1; i++) 
{ 		
	printf("%d, ", odd[i]); 	
} 	
printf("%d\n", odd[numOdds-1]); 	 	
return 0; 
}
