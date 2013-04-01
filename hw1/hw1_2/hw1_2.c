#include <stdio.h>
#define PI 3.14159
 
int main(void)
{
	float r,cir,area; //Define area, radius, and circumference variables
	
	printf("Please enter the radius of the circle!\n"); //Prompt user to input the radius
	scanf("%f", &r); //get user input
	area = PI * r * r; //calculate area
	cir = 2 * PI * r; //calculate circumference
	printf("The circumference of a circle with radius %1.2f ft is equal to %1.2f ft.\n", r, cir); //print the circumference
	printf("The area of a circle with radius %1.2f ft is equal to %1.2f sq. ft.\n", r, area); //print the area
	
	return 0;
}

