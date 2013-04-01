#include <stdio.h>

double population(int year) //population fuction
{
	double pop=0;  //define pop and set to 0
	year = year - 1990; 	//calculate number of years after 1990
	pop = 52.966 + 2.184 * year; //calculate population
	return pop;  //return the population value
}

int main(void)
{
	int year;  //create user input variable
	double pop; //define population variable
	
	while (year <= 1990)  //loop until user gives a year after 1990
	{ 
		printf("Enter a year after 1990: "); //promt user to input year 
		scanf(" %d", &year); //get user input
		if (year <= 1990)  //determin if the year is after 1990
			printf("The year was not valid!\n"); //print error if the year is not valid
		else
		{
			pop = population(year);  //get the population estimate from the population function
			printf("Predicted Gotham City population for %d (in thousands): %.3f.\n", year, pop); //print the results of the estimate of population
		}
	}
}
