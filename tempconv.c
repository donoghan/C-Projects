#include <stdio.h>

int main(void)
{

	double fahrenheit;
	int number;
	
	//Prompt user and receive input

	printf("Enter degrees in Celcius:");	
	scanf("%d", &number);
	printf("You entered: %d\n", number);
	
	// Logic used to convert number to fahrenheit

	 fahrenheit = number * 1.8 + 32;
	
	//Return result to user
	printf("The number you entered is equal to %.2f fahrenheit\n", fahrenheit);

	return 0;

}
