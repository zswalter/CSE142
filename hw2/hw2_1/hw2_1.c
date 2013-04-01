#include <stdio.h>

int main(void)
{
	float usd, euro, conversion;  //Declare variables for input, output, and rate
	char repeat;                  //declare char that is used to determin repeat or not
	repeat = 'y';                 //set repeat to 'y'

	conversion = 0.74;            //set conversion rate to 0.74 Euro per USD

	while (repeat != 'n')         //keep getting input from user till user says 'n'
	{
		printf("Please enter the amount of USD you want to Euros>"); //prompt the user to input an amount for USD to convert
		scanf(" %f", &usd);                                          //get input from user
		euro = usd * conversion;                                     //convert to Euro
		printf("%.2f USD equals %.2f Euros. Do you want to convert another amount (y/n)?", usd, euro); //Print user input and the Euro value
		scanf(" %c", &repeat); //get y/n input from user to repeat
	}
	return 0;
}
