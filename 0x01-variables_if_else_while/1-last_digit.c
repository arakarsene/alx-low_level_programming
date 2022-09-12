#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the last digital of a rendomly generated number
 * Return: Always 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 10) > 5)
	{
		printf("last digital of %d is %d and is great than 5 \n", n, n % 10);
	}
	else if ((n % 10) < 6) && ((n % 10) != 0)
	{
		printf("last digital %d is %d and is less than 6 not 0\n", n, n % 10);
	}
	else
	{
		printf("last digital %d is %d and less than 6 and not 0\n", n, n % 10);
	}
	return (0);

}
