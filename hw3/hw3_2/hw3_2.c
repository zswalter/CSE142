#include <stdio.h>
#include <math.h>

int instruction(void) //define instruction function
{
	printf("Please input the air temp. in Fahrenheit: "); //print instructions for user
}

int main(void) 
{
	char repeat='y';  //repeat char
	float f, speed;   //define temp and speed variable

	while (repeat != 'n')  //repeat till user wants to quit
	{
		instruction();  //print instructions from the instruction function
		scanf(" %f", &f); //get user input
		speed = 1086.0 * sqrt(((5.0 * f) + 297.0) / 247.0);  //calculate the speed
		printf("The speed of sound in the air temp. %.2f is: %.2f\n", f, speed);  //print the results
		printf("Would you like to input another temp? :");  //prompt the user if want to repeat
		scanf(" %s", &repeat); //get user responce 
	}
}
