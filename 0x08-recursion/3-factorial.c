#include "main.h"

/**
 * factorial - times of n-1 number
 * @n: number
 * Return: -1 to error
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
