#include <stdio.h>

int main(void)
{
	int x; //declare integer x
	float y; //declare real number y
	float sum, dif, quo, rem, pro, exp; //define variables for calculations

	printf("Please input a value for x(integer) and y(any real number) in the format X Y!\n"); //prompt user to enter x and y
	scanf("%i %f", &x, &y); //get input x and y from user
	
	sum = x + y; //calculate the sum
	pro = x * y; //calculate the product
	quo = x / y; //calculate the quotiant
	rem = x % 7; //calculate the remainder
	exp = (x * 2 + y / 7) * 8; //calculate the expression
	
	printf("------------------------------\n"); //print header line
	printf("x value      :%i              \n", x); // print x value
	printf("y value      :%f              \n", y); //pirnt y value
	printf("sum          :%f              \n", sum); //print sum
	printf("product      :%f              \n", pro); //ptiny product
	printf("quotient     :%f              \n", quo); //print quotiant
	printf("remainder    :%f              \n", rem); //print remainder
	printf("expression   :%f              \n", exp); //print expression
	printf("------------------------------\n"); //print footer
	
	return 0;
}
