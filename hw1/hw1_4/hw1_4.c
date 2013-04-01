#include <stdio.h>

int main(void)
{
	char answer; //define answer

	printf("How many bits in 1KB?\n"); //print question
	printf("(a) 1,000 bits\n"); //print answer a
	printf("(b) 1,024 bits\n"); //print answer b
	printf("(c) 8,192 bits\n"); //print answer c
	printf("(d) 100 bits\n");   //print answer d
	printf("Please select an answer from (a) to (d):\n"); //print instructions
	scanf("%c", &answer); //read in answer from user
	printf("You selected answer (%c).\n", answer); //print selected answer

	return 0;
}
