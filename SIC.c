
#include <stdio.h>

int main() 
{
	float principal, rate, time, simple_interest;

	// Input principal, rate, and time
	printf("Enter principal amount: ");
	scanf("%f", &principal);

	printf("Enter rate of interest: ");
	scanf("%f", &rate);

	printf("Enter time (in years): ");
	scanf("%f", &time);

	// Calculate simple interest
	simple_interest = (principal * rate * time) / 100;

	// Output the result
	printf("Simple Interest = %.2f\n", simple_interest);

	return 0;
} 
