#include "main.h"

/**
* _strlen_recursion - calculates the length of a string
* @S: string to be used
*
*
* Return: length of the string
*/
void _print_rev_recursion(char *s)
{
	int sum = 0;

	if (*s != '\0')
	{
		sum++;
		sum += _strlen_recursion(s + 1);
	}
	return (sum);
}
