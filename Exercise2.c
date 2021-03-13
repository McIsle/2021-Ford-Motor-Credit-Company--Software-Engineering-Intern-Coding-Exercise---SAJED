#include <stdio.h>
#include <stdlib.h>


void main(void)
{	
	int input = 0, div3 = 0, div5 = 0; // Initializing variables
	
	printf("Input your integer:\n");
	scanf(" %d", &input); // Taking user input
	
	if(input % 3 == 0) // check and store if the input is divisible by 3
		div3 = 1;
	
	if(input % 5 == 0) // check and store if the input is divisible by 5
		div5 = 1;
 	
	if(div3)
		printf("Mustang"); // Print Mustang if divisible by 3
	if(div5)
		printf("Bronco"); // Print Bronco if divisible by 5
	if(!(div3 || div5))
		printf("%d", input); // Pring the input if divisible be neither 3 nor 5	
}
