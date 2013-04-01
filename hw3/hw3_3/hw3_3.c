#include <stdio.h>
#include <math.h>

int primality(int number) //function to determin if number is prime
{
	int i, prime = 1; //define prime and i

	for (i = 2; i <= sqrt(number); i++)  //check all numbers from 2 till square root of number
	{
		if (number%i == 0)  // determin if the number is divisable by i with no remainder
		{	
			prime = 0;  //set prime to 0
			break;  //break the for loop
		}
	}
	if (number == 1)  //determin if number is 1 
		prime = 1; //set prime to 1
	if (number == 2)  //dertermin if number is 2
		prime = 0;  //set prime to 0
	return prime;  //return 1 or 0 for primeCheck
}

int main(void)
{
	FILE *nums, *prime;  //declare file pointers
	int num, primeCheck;  //define num and primeCheck
	
	nums = fopen("numbers.dat", "r");  //open numbers.dat for read
	prime = fopen("primes.dat", "w");  //open primes.dat for writing

	if (nums == NULL) //check to see is the input file is valid
	{
		printf("The input file DNE!\n");  //print error message
	}
	else
	{
		while (1)  //read in numbers untill EOF
		{
			if (feof(nums))
				break;  //stop the loop
			else
			{
				fscanf(nums, "%d", & num);  //get next num
				primeCheck = primality(num);  //check if num is prime
				if (primeCheck == 1)  //determin if primalty function retearns true
					fprintf(prime, "%d ", num);  //print num to file
			}
		}
	}
	fclose(nums); //close nums file
	fclose(prime); //close prime file
}	
