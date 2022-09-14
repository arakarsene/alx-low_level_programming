#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assigns a random number to int n everytime
 * it executes, and prints it
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;
	if (a > 5)
		printf("last digit of %d is %d and great than 5 \n", n, a);
	else if (a == 0)
		printf("last digit of %d is %d and is 0 \n", n, a);
	else 
		printf("last digit of %d is %d and less than 6 and not 0 \n", n, a);
	return (0);
}