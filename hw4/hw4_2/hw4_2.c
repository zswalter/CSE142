#include <stdio.h>

void conversion(long int time, int *hours, int *mins, int *secs) //define conversion function
{
	*secs = time % 60; //calculate secs
	*hours = time / 3600 ; //calculate hours
	*mins = time / 60 - (*hours * 60); //calculate mins
}
int main(void)
{
	int input, hrs, min, sec;  //declare input, hrs, min, sec
	printf("Enter the time interval in seconds: "); //prompt user for input
	scanf(" %d", &input); //get user input
	conversion(input, &hrs, &min, &sec); //call conversion function
	printf("%d seconds are equal to %d hours %d minutes and %d seconds\n", input, hrs, min, sec); //print the results 
}
