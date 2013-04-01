#include <stdio.h>

int main(void)
{
	int side, base, height, area;  //define the variables for calculating area
	char repeat, shape;  //define char that determins to repeat or not

	repeat = 'y';  // set repeat to yes

	while (repeat != 'n') //loop till the user does not want to repeat
	{
		printf("Please enter the first letter of the shape type>"); //propmt user to choose shape
		scanf(" %c", &shape);  //get user input

		if (shape == 'T') //if triangle is selected
		{
			printf("Enter the height and the base of the triangle>");  //prompt user for height and base
			scanf(" %i %i", &height, &base); //get user input
			area = base * height / 2; //calculate area
			printf("The area of the triangle is %i. Do you want to continue (y/n)?>", area); //print the area and ask if to repeat
			scanf(" %c", &repeat); //get user input
		}

		else if (shape == 'S') //if square is selected
		{
			printf("Enter the side of the square>");  //prompt user for the side of the square
			scanf(" %i", &side);  //get the user input
			area = side * side; //calculate area
			printf("The area of the square is %i. Do you want to continue (y/n)?>", area);  //print the area and ask if to repeat
			scanf(" %c", &repeat); //get user input
		}

		else {printf("Please enter T or S!\n");}  //prompt user to input T or S
	}

	return 0;
}
