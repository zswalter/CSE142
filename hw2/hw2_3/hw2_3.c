#include <stdio.h>
#include <math.h>

int main(void)
{
	float a, b, c, xone, xtwo; //declare x1 and x2
	char repeat; //declare repeat char

	repeat = 'y';  //set repeat to yes

	while (repeat != 'n') //repeat till user says n
	{
		printf("Enter the coefficients of the quadratic equation>"); //prompt user to enter a,b,c
		scanf(" %f %f %f", &a, &b, &c);  //get a b and c
		if (a == 0 || (b * b) - (4 * a *c) < 0)  //determin if the values are not defineable
		{printf("a cannot be 0 and b^2-4ac cannot be less than 0!!!\n");}  //if the input is invalid print error
		else
		{
			xone = (-b+sqrt((b * b) - (4 * a * c)))/(2 * a);  //find x1
			xtwo = (-b-sqrt((b * b) - (4 * a * c)))/(2 * a);  //find x2

			printf("The roots of the quadratic are: x1=%.2f, x2=%.2f\n", xone, xtwo);  //print x1 and x2
			printf("Do you want to solve another quadratic equation (y/n)?>");  //ask to repeat
			scanf(" %c", &repeat);  //get user input
		}
	}
	return 0;
}
