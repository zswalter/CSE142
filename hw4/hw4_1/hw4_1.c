#include <stdio.h>

void array_processing(int x[], int size, int *min, int *max, float *mean) //declare function array_processing
{
	float sum = 0;  //declare sum as float
	int i = 0; //declare i and set to 0
	*min = 100; //make min very large
	*max = 0;   //make max very small
	while(i < size) // go through all values of the array x[]
	{
		if (x[i] < *min)  //determin if current value is smaller than current min
			*min = x[i]; //set min to the value
		if (x[i] > *max) //determ if current value is larger than max
			*max = x[i]; //set max to the value
		sum = sum + x[i]; //add current value to the sume
		i++; //go to next array value
	}
	*mean = sum / size;  //calculate the mean
}

int main(void)
{
	int data_ar[]={3, 5, 6, 7, 12, 3, 4, 6, 19, 23, 100, 3, 4, 2, 9, 43, 32, 45, 32, 2, 3, 2, 1}; //define array data_ar
	int min_ar, max_ar; //declare min_ar and max_ar
	float mean_ar; //declare mean_ar
	array_processing(data_ar, sizeof data_ar / sizeof *data_ar, &min_ar, &max_ar, &mean_ar); //call array_processing function
	printf("min: %d\nmax: %d\nmean: %0.2f\n", min_ar, max_ar, mean_ar); //print the results
}
